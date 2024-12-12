#include <stdio.h>

int main(){

    int count, n;

    float x, y;

    printf("Input the values of x and n: \n");
    printf("X = "); scanf("%f", &x);
    printf("n = "); scanf("%d", &n);

    y = 1.0;
    count = 1;

    while(count <= n){
        y = y * x;
        count++;
    }

    printf("x = %f; n = %d; \nx to power n = %d\n", x, n, count);
    printf("y = %f", y);
}