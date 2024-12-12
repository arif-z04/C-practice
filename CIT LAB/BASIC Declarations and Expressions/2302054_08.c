#include <stdio.h>

int main()
{
    int days;
    printf("Number of days: ");
    scanf("%d", &days);

    int years = days / 365;
    days %= 365; 
    int weeks = days / 7;
    days %= 7;


    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);
    return 0;
}