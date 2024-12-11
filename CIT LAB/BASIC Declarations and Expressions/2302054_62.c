#include <stdio.h>

int main(){
    int n, org;
    printf("Input a positive number less than 500: ");
    scanf("%d", &n);
    org = n;
    int sum_of_digit = 0;
    if(n < 500){
        while(n!=0){
            int rem = n % 10;
            n/=10;
            sum_of_digit += rem;
        }
    } else {
        printf("The given number is out of range.");
    }

    printf("Sum of the digits of %d is %d\n", org, sum_of_digit);

}

