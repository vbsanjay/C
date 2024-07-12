#include <stdio.h>

int fun(int n){
    if(n != 0){
        return n - fun(n - 5);
    }
    else{
        return n;
    }
}

int main() {
    // Write C code here
    int n = 10, z;
    z = fun(n);
    printf("%d\n", z);

    return 0;
}