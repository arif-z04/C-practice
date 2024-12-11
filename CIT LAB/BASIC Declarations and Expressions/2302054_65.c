// Finding prime numbers and printing it

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n){
    if(n <= 1) return 0;
    if(n <= 3) return 1; // note: 2 and 3 are primes
    if(n % 2 == 0 || n % 3 == 0) return 0;

    for(int i = 5; i*i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int count = 0;
    printf("Prime numbers between 1 and 199:\n");

    for(int i = 1; i <= 200; i++){
        if(isPrime(i)){
            printf("%d ", i);
            count++;

            if(count % 10 == 0){
                printf("\n");
            }
        }
    }

    if(count % 10 != 0){
        printf("\n");
    }

    return 0;

}