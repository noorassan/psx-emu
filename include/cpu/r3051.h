#pragma once

#include <array>
#include <cstdint>

#include "common/common.h"

class R3051 {
    public:
        R3051();
        ~R3051() = default;

        void reset();
        void clock(int cycles);

    private:
        // Access general registers by index
        inline Word getGeneralReg(uint8_t ind);
        inline void setGeneralReg(uint8_t ind, Word data);

    private:
        // Numbered general registers
        std::array<Word, 32> general_regs;

        // PC = program counter
        // hi, lo are set by multiplier/divider
        Word pc, hi, lo;
};