#include <stdio.h>

int manipulate(int a, int b){
    a = a-- + --b; //5-- + --10 = 5 + 9 = 14
    printf("a: %d\n", a); //a: 14
    printf("b: %d\n", b); //a: 9

    b = b-- + --a;//9-- + --14 = 9-- + 13 = 22
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}

int main() {
    manipulate(5, 10);
    return 0;
}