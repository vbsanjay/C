#include <stdio.h>

int main() {
    char *g = NULL;
    char *h = 0;

    if (g) {
        printf("g");
    } else {
        printf("nullg");
    }

    if (h) {
        printf("h");
    } else {
        printf("nullh");
    }

    return 0;
}
