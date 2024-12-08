#include <stdio.h>

int main()
{
    int days;
    printf("Number of days: ");
    scanf("%d", &days);

    int years = 0; 
    int weeks = 0;

    while(days>=30){
        if(days >= 365){
            years = days / 365;
            days %= 365;
            continue;
        }
        if(days >= 7){
            weeks = days / 7;
            days %= 7;
            continue;
        } 
    }
    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);
    return 0;
}