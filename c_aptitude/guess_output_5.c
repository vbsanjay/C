#include <stdio.h>

int incr(int i){
    static int count = 1;
    printf("count of static: %d\n" ,count);
    count = count + i;
    printf("count + i: %d\n" ,(count));
    return (count);
}

int main() {
    // Write C code here
    int i, j;
    for(i = 0; i <= 4; i++){
        j = incr(i);
    }
    printf("%d\n", j);

    return 0;
}