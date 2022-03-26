#pragma once

#include "common/common.h"

// Region lengths
#define MRAM_LEN  (2048 * K)
#define EXP1_LEN  (8192 * K)
#define PAD_LEN   (1 * K)
#define IO_LEN    (8 * K)
#define EXP2_LEN  (8 * K)
#define EXP3_LEN  (2048 * K)
#define BIOS_LEN  (512 * K)
#define KSEG2_LEN (0.5 * K)

// KUSEG
#define KUSEG_MRAM 0x00000000
#define KUSEG_EXP1 0x1F000000
#define KUSEG_PAD  0x1F800000
#define KUSEG_IO   0x1F801000
#define KUSEG_EXP2 0x1F802000
#define KUSEG_EXP3 0x1FA00000
#define KUSEG_BIOS 0x1FC00000

// KSEG0
#define KSEG0_MRAM 0x80000000
#define KSEG0_EXP1 0x9F000000
#define KSEG0_PAD  0x9F800000
#define KSEG0_IO   0x9F801000
#define KSEG0_EXP2 0x9F802000
#define KSEG0_EXP3 0x9FA00000
#define KSEG0_BIOS 0x9FC00000

// KSEG1
#define KSEG1_MRAM 0xA0000000
#define KSEG1_EXP1 0xBF000000
// No KSEG1 Scratchpad
#define KSEG1_IO   0xBF801000
#define KSEG1_EXP2 0xBF802000
#define KSEG1_EXP3 0xBFA00000
#define KSEG1_BIOS 0xBFC00000

// KSEG2
#define KSEG2 0xFFFE0000