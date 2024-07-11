#include <stdio.h>

int main() {
    int c[] = {5, 4, 3, 2, 1};
    int j, *q = c;
    for (j = 0; j < 5; j++) { 
        ++q;
    }
    printf("%d", *c); 
    return 0;
}
