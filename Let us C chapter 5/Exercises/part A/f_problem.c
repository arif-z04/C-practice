#include <stdio.h>

int main(){
    double x = 11.1;
    while(x >= 1.1)
    {
        printf("%lf\n", x);
        x = x - 0.1;
    }
    return 0;
}