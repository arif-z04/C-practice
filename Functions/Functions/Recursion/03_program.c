#include <stdio.h>

int sumOfNaturalNumbers(int n){
    if(n==1){return 1;}
    return n + sumOfNaturalNumbers(n-1);

}

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfNaturalNumbers(number);
    printf("Sum of the first %d natural numbers is %d\n",number, result);


    return 0;
}