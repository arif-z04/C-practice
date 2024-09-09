/*
Write a program to enter number till the user wants.
At the end it should display the count of positive,
negative and zeros entered;
*/

#include <stdio.h>

int main()
{
    int pos, neg, zero, num;
    char ans = 'y';
    pos = neg = zero = 0;
    while(ans == 'y' || ans == 'Y'){
        
        printf("\nEnter a number: ");
        scanf("%d", &num);

        if(num==0)
            zero++;
        if(num<0)
            neg++;
        if(num>0) 
            pos++;

        int c; 
        while((c=getchar())!='\n'){}
        // \n will taken as a input in 'ans'

        printf("Do you want to continue?(y/n):");
        scanf("%c", &ans);
    }
    
    printf("\nEntered Inputs:\nPostive: %d\nNegative: %d\nZero: %d\n",pos, neg, zero);
    return 0;
}