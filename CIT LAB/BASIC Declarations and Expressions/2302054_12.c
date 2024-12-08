#include <stdio.h>

int main()
{
    char ID[11]; 
    int hours;
    double amountPerHour, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", &ID);

    printf("Input the working hrs: ");
    scanf("%d", &hours);
    
    printf("Salary amount/hr: ");
    scanf("%lf", &amountPerHour);

    salary = amountPerHour * hours;
    printf("Employee ID: %s\n", ID);
    printf("Salary = U$ %.2lf\n", salary);

    
    return 0;
}