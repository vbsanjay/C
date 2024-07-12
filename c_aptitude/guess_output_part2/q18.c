#include <stdio.h>

void func(int x){
    if(x > 0){
        func(--x);
        printf("%d", x);
        func(--x);
    }
}

int main(){
    func(4);
    return 0;
}

