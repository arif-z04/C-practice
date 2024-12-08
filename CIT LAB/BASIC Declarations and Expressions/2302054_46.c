#include <stdio.h>

int main()
{
    double sum = 0;
    double j = 1;
    for(double i = 1; i<=7; i+=2){
        double d = i/j;
        sum += d;
        j *= 2;
    }

    printf("Value of series: %.2lf\n", sum);
    return 0;
}