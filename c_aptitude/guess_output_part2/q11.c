#include <stdio.h>

int array[10];
int printArrayValues(int i){
    i = 0;
    printf("i = %d \n", i); // i = 0

    array[i] = i++; // array[0] = 0
    printf("i = %d \n", i); // i = 1

    array[i] = ++i; // array[2] = 2;
    printf("i = %d \n", i); //i = 2

    array[i] = i + 1; // array[2] = 2 + 1 = 3;
    printf("i = %d \n", i); // i = 2
    
    for(int j = 0; j < 10; j++){
        printf("array[%d] = %d \n",j, array[j]);
    }
}

int main() {
    printArrayValues(2);
    return 0;
}