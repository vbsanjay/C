#include <stdio.h>

void fact(int*);

int main() {
    int i = 5;
    fact(&i);
    printf("%d ", i);
    return 0;
}

void fact(int *j) {
    static int s = 1;
    if (*j != 0) {
        s = s**j;
        *j = *j - 1;
        fact(j);
    }
}
