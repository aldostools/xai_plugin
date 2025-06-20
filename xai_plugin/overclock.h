#ifndef _OVERCLOCK_H
#define _OVERCLOCK_H

#define eieio()                \
	{                          \
		asm volatile("eieio"); \
		asm volatile("sync");  \
	}

#define RSX_MEMORY_FREQ_OFFSET		0x28000004010ULL
#define RSX_CORE_FREQ_OFFSET		0x28000004028ULL

#define MODE_FULL					0
#define MODE_CORE					1
#define MODE_MEMORY					2

#define CORE_300MHz					0x06
#define CORE_350MHz					0x07
#define CORE_400MHz					0x08
#define CORE_450MHz					0x09
#define CORE_500MHz					0x0A
#define CORE_550MHz					0x0B
#define CORE_600MHz					0x0C
#define CORE_650MHz					0x0D
#define CORE_700MHz					0x0E
#define CORE_750MHz					0x0F
#define CORE_800MHz					0x10
#define CORE_850MHz					0x11
#define CORE_900MHz					0x12
#define CORE_950MHz					0x13
#define CORE_1000MHz				0x14
#define CORE_1050MHz				0x15	

#define MEMORY_300MHz				0x0C
#define MEMORY_325MHz				0x0D
#define MEMORY_350MHz				0x0E
#define MEMORY_375MHz				0x0F
#define MEMORY_400MHz				0x10
#define MEMORY_425MHz				0x11
#define MEMORY_450MHz				0x12
#define MEMORY_475MHz				0x13
#define MEMORY_500MHz				0x14
#define MEMORY_525MHz				0x15
#define MEMORY_550MHz				0x16
#define MEMORY_575MHz				0x17
#define MEMORY_600MHz				0x18
#define MEMORY_625MHz				0x19
#define MEMORY_650MHz				0x1A
#define MEMORY_675MHz				0x1B
#define MEMORY_700MHz				0x1C
#define MEMORY_725MHz				0x1D
#define MEMORY_750MHz				0x1E
#define MEMORY_775MHz				0x1F
#define MEMORY_800MHz				0x20
#define MEMORY_825MHz				0x21
#define MEMORY_850MHz				0x22
#define MEMORY_875MHz				0x23
#define MEMORY_900MHz				0x24
#define MEMORY_925MHz				0x25
#define MEMORY_950MHz				0x26
#define MEMORY_975MHz				0x27
#define MEMORY_1000MHz				0x28
#define MEMORY_1025MHz				0x29
#define MEMORY_1050MHz				0x2A

int getClockSpeeds();
int set_overclock_freq(uint8_t core, uint8_t memory, int mode);

#endif /* _OVERCLOCK_H */