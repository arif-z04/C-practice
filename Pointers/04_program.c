#include <stdio.h>

int main()
{
    int b = 21;

    int *a = &b;

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);

    *a = 50; 
    /*
    it means go to the memory 
    address 'a' is pointing to and use 
    that
    */

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("a: %p\n", a);
    
    return 0;
}