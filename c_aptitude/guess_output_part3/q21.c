#include <stdio.h>

int main() {
    //unsigned int is a data type that can only store non-negative values.
    unsigned int x = -10; // negative 10 is converted to its signed equivalent. but how?
    // longest unsigned number 4294967296 + x = 4294967296 - 10 = 4294967286
    printf("-%d", x);
    return 0;
}

//correct output: -4294967286
//complier will produce wrong output