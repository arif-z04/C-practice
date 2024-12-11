#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int term(int n){
    return (n * (n-1)) / 2 + 1;
}

int main(){
    int m;
    
    printf("Enter the number of terms (m): ");
    scanf("%d", &m);

    long long sum = 0;

    for(int i = 1; i <= m; i++){
        int currentTerm = term(i);
        sum += pow(currentTerm, 4);    
    }

    printf("Sum of the series is: %lld\n", sum);
}