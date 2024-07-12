#include <stdio.h>

int is_good_one(int a){ //This function checks if a given integer a contains the digit 9 (binary 0b1001).
    int b; 
    while(a){
        b = a%10;
        if(b == 0b1001){ //0b1001 represents the binary number 1001. Therefore, 0b1001 is indeed 9 in decimal.
            return 1;
        }
        a /= 10;
    }
    return 0;
}

void seive(int a[100], int l){ 
    int i;
    for(i=0; i<l; i++){
        a[i]=is_good_one(i);
    }
}

int main() {
    // Write C code here
    int a[100];
    int i = 0, l, count = 0;
    seive(a, 100);
    l = sizeof(a) /(sizeof(int));
    i = 0;
    for(;i<l;i++){
        if(a[i]) count++;
    }
    printf("%d", count);
    return 0;
}