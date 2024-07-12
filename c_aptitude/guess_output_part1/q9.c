#include <stdio.h>

int printCount(int count){
    for(;;){
        if(count == 10)
            break;
        printf("%d ", ++count);
    }
    return 0;
}

int main() {
    printCount(2);
    return 0;
}