#include <stdio.h>

int binomial_coefficient(int n, int k){
    if(k==0 || k == n){
        return 1;
    }
    return binomial_coefficient(n-1, k-1) + binomial_coefficient(n - 1, k); // using recursion 
}

int main(){
    int n = 10;

    for(int i = 0; i <= n; i++){
        printf("%d ", i);
        for(int j = 0; j <= i; j++){
            printf("%d ", binomial_coefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}