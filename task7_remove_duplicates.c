#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

size_t remove_duplicates(int *arr, size_t size) {
    size_t new_size = 0;
    for (size_t i = 0; i < size; ++i) {
        uint8_t is_duplicate = 0;
        for (size_t j = 0; j < new_size; ++j) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            arr[new_size++] = arr[i];
        }
    }
    return new_size;
}
