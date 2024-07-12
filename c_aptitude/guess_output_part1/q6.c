#include <stdio.h>

int calc(int x, int *py, int **ppz){
    int y,z;
    **ppz += 1;
    z = **ppz;
    *py += **ppz;
    y = *py;
    x += *py;
    return x + y + z;
}


int main() {
    // Write C code here
    int c, *b, **a;
    c = 5;
    b = &c;
    a = &b;
    printf("%d", calc(c,b,a));
    return 0;
}