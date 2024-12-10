#include <stdio.h>


int main(){
    int n;
    float sum = 0;

    printf("Input any number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        sum += (float)1/i;
    }

    printf("Sum = %lf\n", sum);
}