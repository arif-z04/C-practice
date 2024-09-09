/*
Multiplication Table
*/

#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter any number: ");scanf("%d",&num);
    for(i=1; i<=10; i++)
        printf("%d x %2d = %3d\n", num, i, num*i);
    return 0;

}