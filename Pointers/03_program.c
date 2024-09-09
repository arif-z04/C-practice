#include <stdio.h>

int main(){
    
    int a = 123;
    int *pA = &a; //pointing to memory address of stored "a"

    printf("Memory addresso of a: %p\n", &a);
    printf("Value of *pA: %d\n", *pA);
    printf("Address of *pA:  %p\n", pA);
    printf("Value address of *pA: %p\n",*pA);
    
    return 0;
}