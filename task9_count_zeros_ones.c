#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void count_zeros_ones(int num, int *zeros, int *ones) {
    *zeros = 0;
    *ones = 0;
    size_t bits = sizeof(int) * 8;
    for (size_t i = 0; i < bits; ++i) {
        if ((num >> i) & 1) {
            (*ones)++;
        } else {
            (*zeros)++;
        }
    }
}
