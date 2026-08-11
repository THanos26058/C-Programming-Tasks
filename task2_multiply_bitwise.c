#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int multiply_bitwise(int a, int b) {
    int result = 0;
    int sign = (a < 0) ^ (b < 0);
    unsigned int ua = (a < 0) ? -a : a;
    unsigned int ub = (b < 0) ? -b : b;
    
    while (ub != 0) {
        if (ub & 1) {
            result += ua;
        }
        ua <<= 1;
        ub >>= 1;
    }
    
    return sign ? -result : result;
}
