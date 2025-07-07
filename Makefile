PGM = lcdhex

OBJ=main.o

BOOTLOADER = optiboot

MCU = attiny48
DUDE_MCU = t48
DUDE_PGM = avrisp2

AVR_DIR = /opt/apps/programming/avr8-gnu-toolchain-linux_x86_64/bin

AS = $(AVR_DIR)/avr-as
LD = $(AVR_DIR)/avr-ld
OBJCOPY = $(AVR_DIR)/avr-objcopy

DUDEFLAGS = -p $(DUDE_MCU) -c $(DUDE_PGM) -v
AVRDUDE = avrdude $(DUDEFLAGS) -P usb

all: $(PGM).hex

# Assemble
%.o: %.asm
	$(AS) -o $@ -mmcu=$(MCU) --warn -aln $< > $(basename $<).lst

# Link
$(PGM).out: $(OBJ)
	$(LD) -o $(PGM).out -Map $(PGM).map $(OBJ)

# Generate Hex file
$(PGM).hex: $(PGM).out
	$(OBJCOPY) -O ihex $(PGM).out $(PGM).hex

#$(PGM).bin: $(PGM).hex
#	hex2bin -b $(PGM).hex

read_sign:
	$(AVRDUDE) -U signature:r:-:h

# chip must be erased before loading the program.
# load (program) the software into flash
load: $(PGM).hex
	$(AVRDUDE) -U flash:w:$(PGM).hex:i

force_load: $(PGM).hex
	$(AVRDUDE) -F -U flash:w:$(PGM).hex:i

erase:
	$(AVRDUDE) -e

verify:
	$(AVRDUDE) -U flash:v:$(PGM).hex:i



