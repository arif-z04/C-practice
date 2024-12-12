#include <stdio.h>

int main(){
    
    float principal, rate, interest, days;
    const int yearInDays = 365;
    
    printf("Input loan amount(0 to quit): ");
    scanf("%f", &principal);
    
    while((int)principal!=0){
        printf("Input interest rate: ");
        scanf("%f", &rate);

        printf("Input term of the loan in days: ");
        scanf("%f", &days);

        interest = (principal * rate * days) / yearInDays;

        printf("The interest amount is %.2f\n", interest);
        printf("\nInput loan pricipal amount (0 to quit): ");
        scanf("%f", &principal);
    }
    return 0;
}