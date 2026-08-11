#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void swap_arrays(int *arr1, int *arr2, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    swap_arrays(arr1, arr2, 3);
    return 0;
}
