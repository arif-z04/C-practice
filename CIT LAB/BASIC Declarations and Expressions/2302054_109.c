// print squares of even and odd numbers between 1 and n

#include <stdio.h>

int main(){
    int n;
    printf("Input an integer: ");
    scanf("%d", &n);

    printf("\nSquare of even numbers between 1 and %d:\n", n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    printf("\nSquare of odd numbers between 1 and %d:\n", n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    return 0;
}