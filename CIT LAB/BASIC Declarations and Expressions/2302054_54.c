#include <stdio.h>

int main()
{
    float cm;
    printf("Input the distance in cm: ");
    scanf("%f", &cm);

    float inches = cm / 2.54;
    printf("Distance of %.2f cms is: %.2lf inches\n", cm, inches);
    return 0;
}