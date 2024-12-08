#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    if((a+b>c)&&(b+c>a)&&(c+a>b)){
        printf("Perimeter: %.1f\n", a+b+c);
    } else {
        printf("Not possible to create a triangle.");
    }

    return 0;
}