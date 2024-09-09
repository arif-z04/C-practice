#include <stdio.h>

int main()
{
    int n, i = 2;
    int isPrime = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    if(n>0){
        while(i <= n/2)
        {
            if(n % i == 0){
                isPrime=0;
                break;
            }
            i++;
        }
        if(isPrime)
            printf("Prime");
        else 
            printf("Not prime.");

    }
    else{
        printf("Error!");
    }
    return 0;
}