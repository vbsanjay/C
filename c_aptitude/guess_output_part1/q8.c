#include <stdio.h>

int find(int j){
    if(j > 1){
        j = find(j/10) + (j%10);
    }
    else{
        j = 0;
    }
    return j;
}

int main() {
    int i = 1024;
    int k;
    k = find(i);
    printf("%d", k);
}