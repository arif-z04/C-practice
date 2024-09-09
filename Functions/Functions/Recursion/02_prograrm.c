#include <stdio.h>

long long factorial(int n){
    if(n==0||n==1) return 1;
    return n * factorial(n-1);
}

int main(){
    int number; 

    printf("Enter a number: ");
    scanf("%d", &number);

    long double fact = factorial(number);
    printf("Factorial: %llu\n", fact);

    return 0;
    
}
