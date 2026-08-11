#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int most_repeated_element(int *arr, size_t size) {
    if (size == 0) return 0;
    int max_count = 0;
    int most_rep = arr[0];
    for (size_t i = 0; i < size; ++i) {
        int count = 1;
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_rep = arr[i];
        }
    }
    return most_rep;
}
