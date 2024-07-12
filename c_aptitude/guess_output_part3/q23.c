#include <stdio.h>

int N = 12;

int main() {
    static int x = 1;
    if (printf("%d ", x) && x++ < N && main()) {
        // Empty block
    }
    return 0;
}

// output: 1 2 3 4 5 6 7 8 9 10 11 12 
