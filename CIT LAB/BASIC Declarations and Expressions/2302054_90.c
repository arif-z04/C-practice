#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


bool isPalindrome(long long num){
    long long reversed = 0, org = num, rem;
    while(num > 0){
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }
    return org == reversed;
}

void sieveOfEratosthenes(bool *isPrime, long long limit) {
    memset(isPrime, true, (limit + 1) * sizeof(bool));
    isPrime[0] = isPrime[1] = false;

    for (long long p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (long long multiple = p * p; multiple <= limit; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }
}

int main(){
    long long n,l;
    long long count = 0;
    printf("Input two integers: ");
    scanf("%lld %lld",&l, &n);
    
    bool *isPrime = malloc((n+1)* sizeof(bool));
    if(!isPrime){
        printf("Memory Allocation failed! \n");
        return 1;
    }

    sieveOfEratosthenes(isPrime, n);

    for(long long num = l; num <= n; num++){
        if(isPrime[num] && isPalindrome(num)){
            // printf("%lld\n", num);
            count++;
        }
    }
    printf("Total palindrome prime numbers: %lld\n", count);

    return 0;
}