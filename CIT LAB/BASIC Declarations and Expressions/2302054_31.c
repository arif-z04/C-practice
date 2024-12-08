#include <stdio.h>
#include <math.h>

int is_even(int n);

int main()
{
    int num;
    printf("Input an integer: ");
    scanf("%d", &num);

    if(num>0){
        printf("Positive ");
        if(is_even(num)) printf("Even");
        else printf("Odd");
    }
    if(num<0)
    { 
        printf("Negative ");
        if(is_even(num)) printf("Even");
        else printf("Odd");
    }
    if(num==0) printf("Positive");    
    return 0;
}
int is_even(int n){
    if(n%2==0) return 1;
    else return 0;
}
