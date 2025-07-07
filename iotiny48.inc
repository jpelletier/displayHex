;   Copyright (c 2007 Atmel Corporation
;   All rights reserved.
;
;   Redistribution and use in source and binary forms, with or without
;   modification, are permitted provided that the following conditions are met:
;
;   * Redistributions of source code must retain the above copyright
;     notice, this list of conditions and the following disclaimer.
;
;   * Redistributions in binary form must reproduce the above copyright
;     notice, this list of conditions and the following disclaimer in
;     the documentation and/or other materials provided with the
;     distribution.
;
;   * Neither the name of the copyright holders nor the names of
;     contributors may be used to endorse or promote products derived
;     from this software without specific prior written permission.
;
;  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
;  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
;  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
;  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
;  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
;  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
;  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
;  INTERRUPTION HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
;  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE
;  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
;  POSSIBILITY OF SUCH DAMAGE. 

; $Id: iotn48.h,v 1.4.2.15 2009/03/27 16:26:07 arcanum Exp $

.equ SP,   0x3d
.equ SPL,  0x3d
.equ SPH,  0x3e
.equ SREG, 0x3f
.equ SREG_C, 0
.equ SREG_Z, 1
.equ SREG_N, 2
.equ SREG_V, 3
.equ SREG_S, 4
.equ SREG_H, 5
.equ SREG_T, 6
.equ SREG_I, 7


; Registers and associated bit numbers

.equ PINB, 0x03
.equ PINB0, 0
.equ PINB1, 1
.equ PINB2, 2
.equ PINB3, 3
.equ PINB4, 4
.equ PINB5, 5
.equ PINB6, 6
.equ PINB7, 7

.equ DDRB, 0x04
.equ DDB0, 0
.equ DDB1, 1
.equ DDB2, 2
.equ DDB3, 3
.equ DDB4, 4
.equ DDB5, 5
.equ DDB6, 6
.equ DDB7, 7

.equ PORTB, 0x05
.equ PORTB0, 0
.equ PORTB1, 1
.equ PORTB2, 2
.equ PORTB3, 3
.equ PORTB4, 4
.equ PORTB5, 5
.equ PORTB6, 6
.equ PORTB7, 7

.equ PINC, 0x06
.equ PINC0, 0
.equ PINC1, 1
.equ PINC2, 2
.equ PINC3, 3
.equ PINC4, 4
.equ PINC5, 5
.equ PINC6, 6
.equ PINC7, 7

.equ DDRC, 0x07
.equ DDC0, 0
.equ DDC1, 1
.equ DDC2, 2
.equ DDC3, 3
.equ DDC4, 4
.equ DDC5, 5
.equ DDC6, 6
.equ DDC7, 7

.equ PORTC, 0x08
.equ PORTC0, 0
.equ PORTC1, 1
.equ PORTC2, 2
.equ PORTC3, 3
.equ PORTC4, 4
.equ PORTC5, 5
.equ PORTC6, 6
.equ PORTC7, 7

.equ PIND, 0x09
.equ PIND0, 0
.equ PIND1, 1
.equ PIND2, 2
.equ PIND3, 3
.equ PIND4, 4
.equ PIND5, 5
.equ PIND6, 6
.equ PIND7, 7

.equ DDRD, 0x0A
.equ DDD0, 0
.equ DDD1, 1
.equ DDD2, 2
.equ DDD3, 3
.equ DDD4, 4
.equ DDD5, 5
.equ DDD6, 6
.equ DDD7, 7

.equ PORTD, 0x0B
.equ PORTD0, 0
.equ PORTD1, 1
.equ PORTD2, 2
.equ PORTD3, 3
.equ PORTD4, 4
.equ PORTD5, 5
.equ PORTD6, 6
.equ PORTD7, 7

.equ PINA, 0x0C
.equ PINA0, 0
.equ PINA1, 1
.equ PINA2, 2
.equ PINA3, 3

.equ DDRA, 0x0D
.equ DDA0, 0
.equ DDA1, 1
.equ DDA2, 2
.equ DDA3, 3

.equ PORTA, 0x0E
.equ PORTA0, 0
.equ PORTA1, 1
.equ PORTA2, 2
.equ PORTA3, 3

.equ PORTCR, 0x12
.equ PUDA, 0
.equ PUDB, 1
.equ PUDC, 2
.equ PUDD, 3
.equ BBMA, 4
.equ BBMB, 5
.equ BBMC, 6
.equ BBMD, 7

.equ TIFR0, 0x15
.equ TOV0, 0
.equ OCF0A, 1
.equ OCF0B, 2

.equ TIFR1, 0x16
.equ TOV1, 0
.equ OCF1A, 1
.equ OCF1B, 2
.equ ICF1, 5

.equ PCIFR, 0x1B
.equ PCIF0, 0
.equ PCIF1, 1
.equ PCIF2, 2
.equ PCIF3, 3

.equ EIFR, 0x1C
.equ INTF0, 0
.equ INTF1, 1

.equ EIMSK, 0x1D
.equ INT0, 0
.equ INT1, 1

.equ GPIOR0, 0x1E
.equ GPIOR00, 0
.equ GPIOR01, 1
.equ GPIOR02, 2
.equ GPIOR03, 3
.equ GPIOR04, 4
.equ GPIOR05, 5
.equ GPIOR06, 6
.equ GPIOR07, 7

.equ EECR, 0x1F
.equ EERE, 0
.equ EEPE, 1
.equ EEMPE, 2
.equ EERIE, 3
.equ EEPM0, 4
.equ EEPM1, 5

.equ EEDR, 0x20
.equ EEDR0, 0
.equ EEDR1, 1
.equ EEDR2, 2
.equ EEDR3, 3
.equ EEDR4, 4
.equ EEDR5, 5
.equ EEDR6, 6
.equ EEDR7, 7

.equ EEARL, 0x21
.equ EEAR0, 0
.equ EEAR1, 1
.equ EEAR2, 2
.equ EEAR3, 3
.equ EEAR4, 4
.equ EEAR5, 5
.equ EEAR6, 6
.equ EEAR7, 7

.equ GTCCR, 0x23
.equ PSRSYNC, 0
.equ TSM, 7

.equ TCCR0A, 0x25
.equ CS00, 0
.equ CS01, 1
.equ CS02, 2
.equ CTC0, 3

.equ TCNT0, 0x26
.equ TCNT0_0, 0
.equ TCNT0_1, 1
.equ TCNT0_2, 2
.equ TCNT0_3, 3
.equ TCNT0_4, 4
.equ TCNT0_5, 5
.equ TCNT0_6, 6
.equ TCNT0_7, 7

.equ OCR0A, 0x27
.equ OCR0A_0, 0
.equ OCR0A_1, 1
.equ OCR0A_2, 2
.equ OCR0A_3, 3
.equ OCR0A_4, 4
.equ OCR0A_5, 5
.equ OCR0A_6, 6
.equ OCR0A_7, 7

.equ OCR0B, 0x28
.equ OCR0B_0, 0
.equ OCR0B_1, 1
.equ OCR0B_2, 2
.equ OCR0B_3, 3
.equ OCR0B_4, 4
.equ OCR0B_5, 5
.equ OCR0B_6, 6
.equ OCR0B_7, 7

.equ GPIOR1, 0x2A
.equ GPIOR10, 0
.equ GPIOR11, 1
.equ GPIOR12, 2
.equ GPIOR13, 3
.equ GPIOR14, 4
.equ GPIOR15, 5
.equ GPIOR16, 6
.equ GPIOR17, 7

.equ GPIOR2, 0x2B
.equ GPIOR20, 0
.equ GPIOR21, 1
.equ GPIOR22, 2
.equ GPIOR23, 3
.equ GPIOR24, 4
.equ GPIOR25, 5
.equ GPIOR26, 6
.equ GPIOR27, 7

.equ SPCR, 0x2C
.equ SPR0, 0
.equ SPR1, 1
.equ CPHA, 2
.equ CPOL, 3
.equ MSTR, 4
.equ DORD, 5
.equ SPE, 6
.equ SPIE, 7

.equ SPSR, 0x2D
.equ SPI2X, 0
.equ WCOL, 6
.equ SPIF, 7

.equ SPDR, 0x2E
.equ SPDR0, 0
.equ SPDR1, 1
.equ SPDR2, 2
.equ SPDR3, 3
.equ SPDR4, 4
.equ SPDR5, 5
.equ SPDR6, 6
.equ SPDR7, 7

.equ ACSR, 0x30
.equ ACIS0, 0
.equ ACIS1, 1
.equ ACIC, 2
.equ ACIE, 3
.equ ACI, 4
.equ ACO, 5
.equ ACBG, 6
.equ ACD, 7

.equ SMCR, 0x33
.equ SE, 0
.equ SM0, 1
.equ SM1, 2

.equ MCUSR, 0x34
.equ PORF, 0
.equ EXTRF, 1
.equ BORF, 2
.equ WDRF, 3

.equ MCUCR, 0x35
.equ PUD, 4
.equ BODSE, 5
.equ BODS, 6

.equ SPMCSR, 0x37
.equ SELFPRGEN, 0
.equ PGERS, 1
.equ PGWRT, 2
.equ RFLB, 3
.equ CTPB, 4
.equ RWWSB, 6

.equ WDTCSR, 0x60
.equ WDP0, 0
.equ WDP1, 1
.equ WDP2, 2
.equ WDE, 3
.equ WDCE, 4
.equ WDP3, 5
.equ WDIE, 6
.equ WDIF, 7

.equ CLKPR, 0x61
.equ CLKPS0, 0
.equ CLKPS1, 1
.equ CLKPS2, 2
.equ CLKPS3, 3
.equ CLKPCE, 7

.equ PRR, 0x64
.equ PRADC, 0
.equ PRSPI, 2
.equ PRTIM1, 3
.equ PRTIM0, 5
.equ PRTWI, 7

.equ OSCCAL, 0x66
.equ CAL0, 0
.equ CAL1, 1
.equ CAL2, 2
.equ CAL3, 3
.equ CAL4, 4
.equ CAL5, 5
.equ CAL6, 6
.equ CAL7, 7

.equ PCICR, 0x68
.equ PCIE0, 0
.equ PCIE1, 1
.equ PCIE2, 2
.equ PCIE3, 3

.equ EICRA, 0x69
.equ ISC00, 0
.equ ISC01, 1
.equ ISC10, 2
.equ ISC11, 3

.equ PCMSK3, 0x6A
.equ PCINT24, 0
.equ PCINT25, 1
.equ PCINT26, 2
.equ PCINT27, 3

.equ PCMSK0, 0x6B
.equ PCINT0, 0
.equ PCINT1, 1
.equ PCINT2, 2
.equ PCINT3, 3
.equ PCINT4, 4
.equ PCINT5, 5
.equ PCINT6, 6
.equ PCINT7, 7

.equ PCMSK1, 0x6C
.equ PCINT8, 0
.equ PCINT9, 1
.equ PCINT10, 2
.equ PCINT11, 3
.equ PCINT12, 4
.equ PCINT13, 5
.equ PCINT14, 6
.equ PCINT15, 7

.equ PCMSK2, 0x6D
.equ PCINT16, 0
.equ PCINT17, 1
.equ PCINT18, 2
.equ PCINT19, 3
.equ PCINT20, 4
.equ PCINT21, 5
.equ PCINT22, 6
.equ PCINT23, 7

.equ TIMSK0, 0x6E
.equ TOIE0, 0
.equ OCIE0A, 1
.equ OCIE0B, 2

.equ TIMSK1, 0x6F
.equ TOIE1, 0
.equ OCIE1A, 1
.equ OCIE1B, 2
.equ ICIE1, 5

.equ ADCW, 0x78

.equ ADCL, 0x78
.equ ADCL0, 0
.equ ADCL1, 1
.equ ADCL2, 2
.equ ADCL3, 3
.equ ADCL4, 4
.equ ADCL5, 5
.equ ADCL6, 6
.equ ADCL7, 7

.equ ADCH, 0x79
.equ ADCH0, 0
.equ ADCH1, 1
.equ ADCH2, 2
.equ ADCH3, 3
.equ ADCH4, 4
.equ ADCH5, 5
.equ ADCH6, 6
.equ ADCH7, 7

.equ ADCSRA, 0x7A
.equ ADPS0, 0
.equ ADPS1, 1
.equ ADPS2, 2
.equ ADIE, 3
.equ ADIF, 4
.equ ADATE, 5
.equ ADSC, 6
.equ ADEN, 7

.equ ADCSRB, 0x7B
.equ ADTS0, 0
.equ ADTS1, 1
.equ ADTS2, 2
.equ ACME, 6

.equ ADMUX, 0x7C
.equ MUX0, 0
.equ MUX1, 1
.equ MUX2, 2
.equ MUX3, 3
.equ ADLAR, 5
.equ REFS0, 6

.equ DIDR0, 0x7E
.equ ADC0D, 0
.equ ADC1D, 1
.equ ADC2D, 2
.equ ADC3D, 3
.equ ADC4D, 4
.equ ADC5D, 5
.equ ADC6D, 6
.equ ADC7D, 7

.equ DIDR1, 0x7F
.equ AIN0D, 0
.equ AIN1D, 1

.equ TCCR1A, 0x80
.equ WGM10, 0
.equ WGM11, 1
.equ COM1B0, 4
.equ COM1B1, 5
.equ COM1A0, 6
.equ COM1A1, 7

.equ TCCR1B, 0x81
.equ CS10, 0
.equ CS11, 1
.equ CS12, 2
.equ WGM12, 3
.equ WGM13, 4
.equ ICES1, 6
.equ ICNC1, 7

.equ TCCR1C, 0x82
.equ FOC1B, 6
.equ FOC1A, 7

.equ TCNT1, 0x84

.equ TCNT1L, 0x84
.equ TCNT1L0, 0
.equ TCNT1L1, 1
.equ TCNT1L2, 2
.equ TCNT1L3, 3
.equ TCNT1L4, 4
.equ TCNT1L5, 5
.equ TCNT1L6, 6
.equ TCNT1L7, 7

.equ TCNT1H, 0x85
.equ TCNT1H0, 0
.equ TCNT1H1, 1
.equ TCNT1H2, 2
.equ TCNT1H3, 3
.equ TCNT1H4, 4
.equ TCNT1H5, 5
.equ TCNT1H6, 6
.equ TCNT1H7, 7

.equ ICR1, 0x86

.equ ICR1L, 0x86
.equ ICR1L0, 0
.equ ICR1L1, 1
.equ ICR1L2, 2
.equ ICR1L3, 3
.equ ICR1L4, 4
.equ ICR1L5, 5
.equ ICR1L6, 6
.equ ICR1L7, 7

.equ ICR1H, 0x87
.equ ICR1H0, 0
.equ ICR1H1, 1
.equ ICR1H2, 2
.equ ICR1H3, 3
.equ ICR1H4, 4
.equ ICR1H5, 5
.equ ICR1H6, 6
.equ ICR1H7, 7

.equ OCR1A, 0x88

.equ OCR1AL, 0x88
.equ OCR1AL0, 0
.equ OCR1AL1, 1
.equ OCR1AL2, 2
.equ OCR1AL3, 3
.equ OCR1AL4, 4
.equ OCR1AL5, 5
.equ OCR1AL6, 6
.equ OCR1AL7, 7

.equ OCR1AH, 0x89
.equ OCR1AH0, 0
.equ OCR1AH1, 1
.equ OCR1AH2, 2
.equ OCR1AH3, 3
.equ OCR1AH4, 4
.equ OCR1AH5, 5
.equ OCR1AH6, 6
.equ OCR1AH7, 7

.equ OCR1B, 0x8A

.equ OCR1BL, 0x8A
.equ OCR1BL0, 0
.equ OCR1BL1, 1
.equ OCR1BL2, 2
.equ OCR1BL3, 3
.equ OCR1BL4, 4
.equ OCR1BL5, 5
.equ OCR1BL6, 6
.equ OCR1BL7, 7

.equ OCR1BH, 0x8B
.equ OCR1BH0, 0
.equ OCR1BH1, 1
.equ OCR1BH2, 2
.equ OCR1BH3, 3
.equ OCR1BH4, 4
.equ OCR1BH5, 5
.equ OCR1BH6, 6
.equ OCR1BH7, 7

.equ TWBR, 0xB8
.equ TWBR0, 0
.equ TWBR1, 1
.equ TWBR2, 2
.equ TWBR3, 3
.equ TWBR4, 4
.equ TWBR5, 5
.equ TWBR6, 6
.equ TWBR7, 7

.equ TWSR, 0xB9
.equ TWPS0, 0
.equ TWPS1, 1
.equ TWS3, 2
.equ TWS4, 3
.equ TWS5, 4
.equ TWS6, 5
.equ TWS7, 6

.equ TWAR, 0xBA
.equ TWGCE, 0
.equ TWA0, 1
.equ TWA1, 2
.equ TWA2, 3
.equ TWA3, 4
.equ TWA4, 5
.equ TWA5, 6
.equ TWA6, 7

.equ TWDR, 0xBB
.equ TWD0, 0
.equ TWD1, 1
.equ TWD2, 2
.equ TWD3, 3
.equ TWD4, 4
.equ TWD5, 5
.equ TWD6, 6
.equ TWD7, 7

.equ TWCR, 0xBC
.equ TWIE, 0
.equ TWEN, 2
.equ TWWC, 3
.equ TWSTO, 4
.equ TWSTA, 5
.equ TWEA, 6
.equ TWINT, 7

.equ TWAMR, 0xBD
.equ TWAM0, 1
.equ TWAM1, 2
.equ TWAM2, 3
.equ TWAM3, 4
.equ TWAM4, 5
.equ TWAM5, 6
.equ TWAM6, 7

.equ TWHSR, 0xBE
.equ TWIHS, 0


; Interrupt Vectors
; Interrupt vector 0 is the reset vector.

;.equ INT0_vect         _VECTOR(1)
;.equ INT1_vect         _VECTOR(2)
;.equ PCINT0_vect       _VECTOR(3)
;.equ PCINT1_vect       _VECTOR(4)
;.equ PCINT2_vect       _VECTOR(5)
;.equ PCINT3_vect       _VECTOR(6)
;.equ WDT_vect          _VECTOR(7)
;.equ TIMER1_CAPT_vect  _VECTOR(8)
;.equ TIMER1_COMPA_vect _VECTOR(9)
;.equ TIMER1_COMPB_vect _VECTOR(10)
;.equ TIMER1_OVF_vect   _VECTOR(11)
;.equ TIMER0_COMPA_vect _VECTOR(12)
;.equ TIMER0_COMPB_vect _VECTOR(13)
;.equ TIMER0_OVF_vect   _VECTOR(14)
;.equ SPI_STC_vect      _VECTOR(15)
;.equ ADC_vect          _VECTOR(16)
;.equ EE_READY_vect     _VECTOR(17)
;.equ ANALOG_COMP_vect  _VECTOR(18)
;.equ TWI_vect          _VECTOR(19)

;.equ _VECTORS_SIZE 40


; Constants
.equ SPM_PAGESIZE, 32
.equ RAMEND,       0x1FF
.equ XRAMSIZE,     0
.equ XRAMEND,      RAMEND
.equ E2END,        0x3F
.equ E2PAGESIZE,   4
.equ FLASHEND,     0xFFF


; Fuse Information
.equ FUSE_MEMORY_SIZE, 3

; Low Fuse Byte
.equ FUSE_CKDIV8, 0x80 ; Divide clock by 8
.equ FUSE_CKOUT,  0x40 ; Clock output
.equ FUSE_SUT1,   0x20 ; Select start-up time
.equ FUSE_SUT0,   0x10 ; Select start-up time
.equ FUSE_CKSEL3, 0x08 ; Select Clock Source
.equ FUSE_CKSEL2, 0x04 ; Select Clock Source
.equ FUSE_CKSEL1, 0x02 ; Select Clock Source
.equ FUSE_CKSEL0, 0x01 ; Select Clock Source
.equ LFUSE_DEFAULT, (FUSE_CKSEL0 & FUSE_CKSEL2 & FUSE_CKSEL3 & FUSE_SUT0 & FUSE_CKDIV8)

; High Fuse Byte
.equ FUSE_BODLEVEL0,   0x01 ; Brown-out Detector trigger level
.equ FUSE_BODLEVEL1,   0x02 ; Brown-out Detector trigger level
.equ FUSE_BODLEVEL2,   0x04 ; Brown-out Detector trigger level
.equ FUSE_EESAVE,      0x08 ; EEPROM memory is preserved through chip erase
.equ FUSE_WDTON,       0x10 ; Watchdog Timer Always On
.equ FUSE_SPIEN,       0x20 ; Enable Serial programming and Data Downloading
.equ FUSE_DWEN,        0x40 ; debugWIRE Enable
.equ FUSE_RSTDISBL,    0x80 ; External reset disable
.equ HFUSE_DEFAULT, (FUSE_SPIEN)

; Extended Fuse Byte
.equ FUSE_SELFPRGEN,   0x01 ; Self Programming Enable
.equ EFUSE_DEFAULT, 0xFF


; Lock Bits
.equ __LOCK_BITS_EXIST, 1


; Signature
.equ SIGNATURE_0, 0x1E
.equ SIGNATURE_1, 0x92
.equ SIGNATURE_2, 0x09
