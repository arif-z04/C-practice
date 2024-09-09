#include <stdio.h>

int main(){
    int num, i, isPrime;

    printf("Enter the number: ");
    scanf("%d", &num);

    isPrime = 1;

    for(i = 2; i<=num/2; i++){
        if(num%2 == 0){
            isPrime = 0;
        }
    }
    
    if(isPrime==1&&num!=0&&num!=1){
        printf("Prime");
    }else{
        printf("Non-prime.");
    }

}