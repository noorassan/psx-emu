#include <algorithm>

#include "common/memory.h"
#include "cpu/r3051.h"

R3051::R3051() {
    reset();
}

void R3051::reset() {
    // Reset regs to 0
    std::fill(general_regs.begin(), general_regs.end(), 0);

    pc = KSEG1_BIOS;
    hi = lo = 0;
}

void R3051::clock(int cycles) {
    return;
}