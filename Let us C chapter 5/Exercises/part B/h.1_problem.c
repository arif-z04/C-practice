/*
Write a program to receive an integer and find it binary values.
*/

#include <stdio.h>

int main()
{
    int num, bin=0, place=1; 
    printf("Enter any number: ");
    scanf("%d", &num);

    while(num > 0){
        int rem = num % 2;
        bin += rem * place;
        num /= 2; 
        place *= 10;
    }
    printf("Binary: %.8d", bin);
    return 0;
}
