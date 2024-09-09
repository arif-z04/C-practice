#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;
    x = 5;
    y = 10;

    printf("x: %d, y: %d\n", x, y);
    printf("&x: %p\n&y: %p\n", &x, &y);
    
    swap(&x, &y);    

    printf("x: %d, y: %d\n", x, y);
    
    return 0;
}

void swap(int *a, int *b){
    printf("a: %p\nb: %p\n", a, b);
    printf("*a: %d\n*b: %d\n", *a, *b);
    //swapping algorithm
    int temp = 0;
    temp = *a; //we are accessing those values
    *a = *b;
    *b = temp;
    /*
    we are accessing the values a and b pointing to
    and swapping to.
    */
}