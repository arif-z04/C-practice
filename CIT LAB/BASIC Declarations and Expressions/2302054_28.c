#include <stdio.h>

int main()
{
    int numbers[5], total=0;
    int pos=0;
    float avg;
    
    printf("Input the first number: ");
    scanf("%d", &numbers[0]);
    printf("Input the second number: ");
    scanf("%d", &numbers[1]);
    printf("Input the third number: ");
    scanf("%d", &numbers[2]);
    printf("Input the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("Input the fifth number: ");
    scanf("%d", &numbers[4]);

    for(int i = 0; i<5; i++){
        if(numbers[i]>0)
        { 
            pos++; 
            total+=numbers[i];
        }
    }

    avg = (float)total / (float)pos;

    printf("Number of positive numbers: %d\n", pos);
    printf("Average value of the said positive numbers: %.2f\n", avg);
    return 0;
}