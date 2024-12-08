#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the first integer: "); scanf("%d", &a);
    printf("Enter the second integer: "); scanf("%d", &b);
    printf("Enter the third integer: "); scanf("%d", &c);

    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("Maximum value of three integers: %d\n", max);

    return 0;
}