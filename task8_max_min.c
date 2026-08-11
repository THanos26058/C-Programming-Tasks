#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void get_max_min(int *arr, size_t size, int *max_val, size_t *max_idx, int *min_val, size_t *min_idx) {
    if (size == 0) return;
    *max_val = *min_val = arr[0];
    *max_idx = *min_idx = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > *max_val) {
            *max_val = arr[i];
            *max_idx = i;
        }
        if (arr[i] < *min_val) {
            *min_val = arr[i];
            *min_idx = i;
        }
    }
}

int main() {
    int arr[] = {1, 5, 2, 8, 3};
    int max_val, min_val;
    size_t max_idx, min_idx;
    get_max_min(arr, 5, &max_val, &max_idx, &min_val, &min_idx);
    return 0;
}
