// write a program to calculate overtime pay of 10 employees.
/*
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not work for
fractional part of an hour. 

*/ 
#include <stdio.h>

int main()
{
    double overtimePay;
    int i = 1, hour;
    printf("---------------------------------\n");
    while(i<=10)
    {   
        printf("Employee No: %d\n", i);
        printf("Enter number of hours worked: ");
        scanf("%d", &hour);

        if(hour >= 40)
        {
            overtimePay = (hour - 40) * 120;
            if (overtimePay==0)
                overtimePay=120;
            printf("Number of Hours worked: %d hours.\nOvertime pay: %.2lf Rs\n", hour, overtimePay);
        }
        else{
            overtimePay = 0;
            printf("Number of hours worked: %d hours.\nWhich is less that 40 hours. No overtime pay.\n", hour);
        }
        i++;
        printf("---------------------------------\n");
    }
    return 0;
}