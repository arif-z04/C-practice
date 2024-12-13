#include <stdio.h>

int countDigitThree(int n){
    if(n < 0) return 0;

    int count = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit == 3) count++;
        n /= 10;
    }

    return count;
}

int main(){
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    printf("The number of threes in the said number is %d", countDigitThree(n));

    return 0;
}