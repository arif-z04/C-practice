/*
write a program to print out all Armstrong number between 1 and 500.
If sum of cubes of each digit of the number is equal to the number itself, then 
the number is called an Armstrong number. For example
153 = (1*1*1)+(5*5*5)+(3*3*3)
*/

#include <stdio.h>

int main()
{
    int i = 1, a,b,c;
    printf("Armstrong numbers between 1 & 500 are:\n ");

    while(i<=500){
        a = i % 10;
        b = i % 100;
        b = (b - a)/10; 
        c = i/100;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf("%d\n",i);

        i++;  
    }
    return 0;
}