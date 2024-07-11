#include <stdio.h>

int main() {
    // Write C code here
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr; //double pointer: pointer to a pointer
    

    printf("value of a: %d\n", a);
    printf("address of a: %p\n", &a);
    printf("--------------------------\n");
    printf("value of ptr: %p\n", ptr);
    printf("address of ptr: %p\n", &ptr);
    printf("derefering ptr: %d\n", *ptr);
    printf("--------------------------\n");
    printf("value of ptr2: %p\n", ptr2);
    printf("address of ptr2: %p\n", &ptr2);
    printf("derefering ptr2 once: %p\n", *ptr2);
    printf("derefering ptr2 twice: %d\n", **ptr2);
    
    // Varaible     Datatype                Value           Address             derefer
    //  a           int                     8               #a-56               -
    //  ptr         pointer                 #a-56           #ptr-57             8
    //  ptr2        pointer to pointer      #ptr-57         #ptr2-57            

    return 0;
}