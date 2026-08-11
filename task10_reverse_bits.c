#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t num) {
    uint8_t reversed = 0;
    for (int i = 0; i < 8; ++i) {
        if ((num >> i) & 1) {
            reversed |= (1 << (7 - i));
        }
    }
    return reversed;
}
