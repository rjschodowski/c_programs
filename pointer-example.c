#include <stdio.h>

int main() {
    int j = 63;
    int *willy = NULL;  // Pointers should be initialized to NULL until they are assigned a valid location
     = &j; 
    
    printf("The address of j is %x\n", &j);
    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
    printf("P is pointing to the address of %x\n", &*p);
}

/* 

Some algorithms use a pointer to a pointer. This type of variable declaration uses **, and can be assigned the address of another pointer, as in:
int x = 12;
int *p = NULL
int **ptr = NULL;
p = &x;
ptr = &p;

*/