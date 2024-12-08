#include <stdio.h>

int main()
{
    int a, b;
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    int sum = a + b;

    printf("Sum of the above two integers= %d\n", sum);
    return 0;
}