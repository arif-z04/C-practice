/*
Write a program to reveive and integer and find its octal equivalent.

*/

#include <stdio.h>

int main()
{
    int num, octal=0, place=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        int rem = num % 8;
        octal += rem * place; 
        num = num / 8; 
        place = place * 10; 
    }
    printf("Octal value: %d", octal);
    return 0;
}