#include <stdio.h>

void printOutput(float a) {
    int i;
    char *ptr;
    ptr = (char *)&a;  // Casts the address of 'a' (float) to a char pointer
    for (i = 0; i < 3; i++) {
        printf("%d ", *ptr++);  // Prints the integer value of each byte of 'a'
    }
}

int main() {
    printOutput(5.2);
    return 0;
}
