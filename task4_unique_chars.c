#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

size_t copy_unique_chars(const char *src, size_t src_size, char *dest) {
    uint8_t seen[256] = {0};
    size_t dest_idx = 0;
    for (size_t i = 0; i < src_size; ++i) {
        unsigned char c = (unsigned char)src[i];
        if (!seen[c]) {
            seen[c] = 1;
            dest[dest_idx++] = src[i];
        }
    }
    return dest_idx;
}
