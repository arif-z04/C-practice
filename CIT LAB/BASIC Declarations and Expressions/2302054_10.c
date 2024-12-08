// Product of two integers
#include <stdio.h>

int main()
{
    int a, b;
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    int product = a * b;

    printf("Product of the above two integers= %d\n", product);
    return 0;
}