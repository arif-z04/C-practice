#include <stdio.h>

int main()
{
    int num, i, isPrime; 

    printf("Enter the number to be tested: ");
    scanf("%d", &num);

    isPrime = 1;
    i = 2;

    do{
        if(num % i == 0){
            isPrime = 0;
            break;
        }
        i++;
    }while(i<= num/2);
    
    if(isPrime==1&&num!=1&&num!=0){
        printf("Prime");
    }
    else{
        printf("Non prime");
    }
    return 0;


}