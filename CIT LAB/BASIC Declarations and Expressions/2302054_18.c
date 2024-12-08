#include <stdio.h>

int main()
{
    int totalDays;
    int years, months, days;
    printf("Input no. of days: "); scanf("%d", &totalDays);
    years = totalDays / 365;
    totalDays %= 365;
    months = totalDays / 30;
    days = totalDays % 30;
    
    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);
    
    return 0;
}