#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int count_calls() {
    static int count = 0;
    return ++count;
}
