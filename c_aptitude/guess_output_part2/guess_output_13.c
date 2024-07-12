#include <stdio.h>

int magic(int a){
    return a * (a + 1) * (2 * a + 1);
}

int main(){
    int i = 0, n = 100, count = 0;
    while(i < n){
        if(magic(i) % 3 == 0){
            count++;
        }
        i++;
    }

    printf("%d", count);
}
