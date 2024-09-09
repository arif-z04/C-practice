/*
Write a program to find the range of a set 
of numbers. Range is the difference between 
the smallest and biggest number in the list.
*/

#include <stdio.h>

int main(){
    int n, num, flag, small, big, range;

    flag = 0;

    printf("\nHow many numbers are there in a set?: ");
    scanf("%d", &n);

    while(n>0)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(flag==0)
        {
            small = big = num;
            flag = 1; 
        }
        else
        {
            if(num > big) big = num;
            if(num < small) small = num;
        }
        n--;
    }
    if(small<0)
        range = small + big; 
    else
        range = big - small; 
    if(range < 0)
        range = range *-1;
    printf("Range: %d\n",range);
    printf("Domain: {%d < x < %d} ", small, big);

}