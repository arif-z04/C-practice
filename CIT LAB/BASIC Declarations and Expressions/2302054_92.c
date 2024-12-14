#include <stdio.h>

long long findLastNonZeroDigit(long long n){
    while(n % 10 == 0){
        n /= 10;
    }
    return n % 10;
}

unsigned long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Invalid input! Please enter a positive integer.");
        return 1;
    }
    unsigned long long fact = factorial(n);
    printf("%llu\n" , fact);
    long long lastDigit = findLastNonZeroDigit(fact);
    printf("The last non-zero digit of %d! is: %d\n", n, lastDigit);
}