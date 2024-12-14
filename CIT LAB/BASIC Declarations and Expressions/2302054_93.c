#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000000

void sieve(int *prime, int max){

    memset(prime, 1, sizeof(int)*(max+1));
    
    prime[0] = prime[1] = 0;

    for(int i = 2; i*i <= max; i++){
        if(prime[i]){
            for(int j = i*i; j<=max; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int nearlyPrime(int n, int *prime){

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            int altFact = n / i;
            if(prime[i] && prime[altFact]){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    int *prime = (int*)malloc((MAX + 1) * sizeof(int));

    sieve(prime, MAX);

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0 || n > MAX){
        printf("Invalid input! Please enter a positive integer between 1 and %d.\n", MAX);
        free(prime);
        return 1;

    }   

    if(nearlyPrime(n, prime)){
        printf("%d is a nearly prime number. \n", n);
        free(prime);
    } else {
        printf("%d is not a nearly prime number.\n", n);
    }

    free(prime);
    return 0;
}