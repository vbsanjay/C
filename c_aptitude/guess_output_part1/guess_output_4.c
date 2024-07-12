#include <stdio.h>

int f(int *a, int m){
    int j = 0;
    for(j = 0; j < m; j++){
        *(a + j) = *(a + j) - 5;
    }
}

int main() {
    // Write C code here
    int a[] = {'f','g','h','i'};
    int j = 0;
    f(a,4);
    printf("%d\n",a[1] - 'a');
    return 0;
}