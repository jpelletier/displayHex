;*---------------------------------------------------------------------------*
;* main.asm                                                                  *
;* Copyright (C) 2025  Jacques Pelletier                                     *
;*                                                                           *
;* This program is free software; you can redistribute it and *or            *
;* modify it under the terms of the GNU General Public License               *
;* as published by the Free Software Foundation; either version 2            *
;* of the License, or (at your option) any later version.                    *
;*                                                                           *
;* This program is distributed in the hope that it will be useful,           *
;* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
;* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
;* GNU General Public License for more details.                              *
;*                                                                           *
;* You should have received a copy of the GNU General Public License         *
;* along with this program; if not, write to the Free Software Foundation,   *
;* Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.           *
;*---------------------------------------------------------------------------*
;2 digits 7 segments LCD pin out
;1/4 Duty 1/2 Bias
;CPU	Pin		Function
;PC0	 1		1F,1G,1E
;PC1	 2		1A,1B,1C,1D
;PC2	 3		2F,2G,2E,P
;PC3	 4		2A,2B,2C,2D

;PA3	 5		COM4
;PA2	 6		COM3
;PA1	 7		COM2
;PA0	 8		COM1

;COM1-4 driving
;--------------
;PA outputs are set as output one at a time.
;1.5k pull-ups and pull-downs generate the half bias for floating outputs

;Segments display
;----------------
;Read the hex value to display from port D.
;Read the 7 segment values for high and low nibbles
;Check which segments are on from the 2 7-segment values
;Dot (P) is not used

;Input on PD(7-0)

;R20	Low nibble 7-segment value
;R21	High nibble 7-segment value
;R22	scan lines

		.include "iotiny48.inc"
		.include "macros.inc"

;-----------------------------------------------
setup:
		;initialize SP
		ldi		r16,0xDF
		out		SPL,r16

		;hexadecimal input to display
		clr		r16
		out		DDRD,r16

		;7-segment drive
		ldi		r16,0x0F
		out		DDRC,r16

		;Scope trigger
		;ldi		r16,1
		;out		DDRB,r16

;-----------------------------------------------
		;clr		r24
loop:
		in		r16,PIND

		;mov		r16,r24
		rcall	get7segValue	;in R21,R20
		rcall	displayLcd
		;inc		r24
		rjmp	loop

;-----------------------------------------------
;Check segments to drive
;76543210
;-GFEDCBA
checkSegs:
		clr		r16

		cpi		r22,0x01
		brne	1f
			;0	1F	r21,5
			;1	1A	r21,0
			;2	2F	r20,5
			;3	2A	r20,0
			sbrc	r21,5
			sbr		r16,0x01
			sbrc	r21,0
			sbr		r16,0x02
			sbrc	r20,5
			sbr		r16,0x04
			sbrc	r20,0
			sbr		r16,0x08
			ret
1:		
		cpi		r22,0x02
		brne	2f
			;0	1G	r21,6
			;1	1B	r21,1
			;2	2G	r20,6
			;3	2B	r20,1
			sbrc	r21,6
			sbr		r16,0x01
			sbrc	r21,1
			sbr		r16,0x02
			sbrc	r20,6
			sbr		r16,0x04
			sbrc	r20,1
			sbr		r16,0x08
			ret
2:		
		cpi		r22,0x04
		brne	3f
			;0	1E	r21,4
			;1	1C	r21,2
			;2	2E	r20,4
			;3	2C	r20,2
			sbrc	r21,4
			sbr		r16,0x01
			sbrc	r21,2
			sbr		r16,0x02
			sbrc	r20,4
			sbr		r16,0x04
			sbrc	r20,2
			sbr		r16,0x08
			ret
3:		cpi		r22,0x08
		brne	4f
			;0	-
			;1	1D	r21,3
			;2	P
			;3	2D	r20,3
			sbrc	r21,3
			sbr		r16,0x02
			sbrc	r20,3
			sbr		r16,0x08
			ret
4:		ret

;Make one scan
displayLcd:
		PUSH_V
		ldi		r23,50
1:
		;DDRA: only one output active to scan the COM1-4
			ldi		r22,0x01
2:
			;DDRA: only one output active to scan the COM1-4
			out		DDRA,r22
			;out		PORTB,r22

			rcall	checkSegs

			com		r16

			;Toggle current scan line
			out		PORTA,r22
			out		PORTC,r16
			rcall	delay1ms

			com		r22
			com		r16

			out		PORTA,r22
			out		PORTC,r16
			rcall	delay1ms

			com		r22			;restore r22

			lsl		r22
			cpi		r22,0x10
			brne	2b

		dec		r23
		brne	1b

		POP_V
		ret

;Returns the 7-segment values into R21,R20
get7segValue:
		push	r16
		
		andi	r16,0x0f
		rcall	get7seg
		mov		r20,r16

		pop		r16

		lsr		r16
		lsr		r16
		lsr		r16
		lsr		r16
		
		rcall	get7seg
		mov		r21,r16
		ret

get7seg:
		LDI_Z 	tabseg

		add		r30,r16
		lpm		r16,Z
		ret

;R26 N ms delay
;R26 modified
delayNms:
1:
		rcall	delay1ms
		sbiw	r26,1
		brne	1b
		ret
		
delay1ms:
		PUSH_X
		LDI_X 	255
1:		sbiw	r26,1
		brne	1b
		POP_X
		ret

delay100us:
		nop
		PUSH_X
		LDI_X 	21
1:		sbiw	r26,1
		brne	1b
		POP_X
		ret

delay25us:
		nop
		push	r16
		ldi		r16,4
1:		dec		r16
		brne	1b
		pop		r16
		ret

;=================================================================
; 0		a
; 1		b
; 2		c
; 3		d
; 4		e
; 5		f
; 6		g
; 7		-
tabseg: .byte 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71

