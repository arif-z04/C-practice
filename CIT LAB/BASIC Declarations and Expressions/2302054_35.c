#include <stdio.h>

int main()
{
    int a, b;
    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    printf("Input first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if(a > b){
        printf("The pair is in descending order!");
    }

    if(b > a){
        printf("The pair is in ascending order!");
    }
    if(a==b){

        printf("This pair has the same numbers!");
    }
    return 0;
}