#include <stdio.h>

int main()
{
    int P, r, time;
    int amount; 

    printf("Input Principle, Rate of Interest & time to find simple interest: ");
    scanf("%d", &P);
    scanf("%d", &r);
    scanf("%d", &time);

    amount = (P * r * time)/100 ;

    printf("Simple Interest: %d\n", amount);
    return 0;
}