// divide two integers 


#include <stdio.h>

int main(){

    int a, b;
    float result;

    printf("Enter two integers:\n");

    scanf("%d %d", &a, &b);

    if(b==0){
        printf("Division not possible\n");
    } else {
        result = (float)a / b;
        printf("Result: %.2f\n", result);
    }
}