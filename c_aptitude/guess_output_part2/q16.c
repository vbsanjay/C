#include <stdio.h>

int main() {
    int n[3][3] = {
        {2, 4, 3},
        {6, 8, 5},
        {3, 5, 1}
    };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("n[%d][%d] = %d \n", i, j, n[i][j]);
            // printf("*(*(n + i)+j)) = %d\n", *(*(n+1) + j) );
            // printf("(n+1) = %p\n", (n+1));
            // printf("*(n+1) = %p\n", *(n+1));
            printf("*(n+1) + j = %d\n", *(*(n+i) + j));
            printf("==================\n");
        }
    }

    return 0;
}
