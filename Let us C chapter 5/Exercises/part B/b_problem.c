/*
Write a program to find the factorial value of any numebr entered 
through the keyboard.

*/
#include <stdio.h>

int main()
{
    int num, i = 1; 
    unsigned long int fact = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(i<=num){
        fact = fact * i;
        i++;
    }
    printf("factorial of %d = %lu\n", num, fact);
    return 0;
}