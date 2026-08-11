#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void toggle_bit(uint8_t *var, uint8_t bit_pos) {
    *var ^= (1 << bit_pos);
}
