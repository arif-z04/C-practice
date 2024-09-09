/*
Write a program to print all prime numbers from
1 to 300.
*/

#include <stdio.h>

int main(){
    int num, j, isPrime, count;

    for(num=2; num<=300; num++){
        isPrime = 1;

        for(j=2; j<=num/2; j++){
            if(num % j == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            printf("%d\n", num);
            count++;
        }
    }
    printf("Total: %d prime numbers.", count);
    return 0;
}