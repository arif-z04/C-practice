#include <stdio.h>


int isPositive(float num)
{
    return num > 0;
}


void inputArray(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
}

int main()
{
    float arr[7];
    printf("Input 7 numbers(int/float):\n");
    inputArray(arr, 7);

    int positiveCount = 0;
    int negativeCount = 0;
    float sum_positive = 0;
    float sum_negative = 0;

    for(int i = 0; i < 7; i++)
    {
        if(isPositive(arr[i]))
        {
            positiveCount++;
            sum_positive += arr[i];
        }
        else
        {
            negativeCount++;
            sum_negative += arr[i];
        }
    }

    printf("%d Number of positive numbers: Average %.2f\n", positiveCount, sum_positive/positiveCount);
    printf("%d Number of negative numbers: Average %.2f\n", negativeCount, sum_negative/negativeCount);

    return 0;
}