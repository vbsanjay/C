#include <stdio.h>
extern int x;

int main() {
    do {
        do {
            printf("%o", x);
        } while(0);
    } while(0);
    return 0;
}
int x = 8;

