#include <stdio.h>
#include <stdlib.h>

void print(int *a);


int main()
{
    int a[3] = {1,2,3}; 
    int *b;
    b = a; 

    printf("b: %p\n", b);

    printf("a: %p\n", a); 
    print(a);
    return 0;
}

void print(int *a)
{
    printf("a[1] = %d\n", a[1]);
}