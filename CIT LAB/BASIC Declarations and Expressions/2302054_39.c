/*
Sum all numbers between two integers,
excluding multiples of 17
*/

#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    printf("\nInput the first integer: ");
    scanf("%d", &a);

    printf("\nInput the second integer: ");
    scanf("%d", &b);

    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }

    for(int i = a; i <= b; i++){
        if(i % 17 != 0){
            sum+=i;
        }
    }
    printf("\nSum: %d\n", sum);
    return 0;
}