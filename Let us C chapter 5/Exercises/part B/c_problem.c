/*
Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.
*/

#include <stdio.h>

int main()
{
    int x, y, i = 1;
    long int power = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    while(i<=y)
    {
        power = power * x;
        i++;
    }
    printf("%d to the power %d is %ld\n", x, y, power);
    
    return 0;
}

