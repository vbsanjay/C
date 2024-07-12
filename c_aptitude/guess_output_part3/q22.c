#include <stdio.h>

#define dummy1 0
#define dummy2 1
#define dummy3 2
#define dummy4 3

int change(int a) {
    if (a < 10) {
        a += 10;
        return a;
    }
    if (a < 15) {
        a -= 10;
        return a;
    }
    return a;
}

int main() {
    int a = 5, b;

    b = change(a);
    printf("%d-%d", a, b);
    a += a;
    b = change(a);
    printf("\n%d-%d", a, b);
    return 0;
}
