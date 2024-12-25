#include <stdio.h>


void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int isPositive(int num)
{
    return num > 0;
}

int isOdd(int num)
{
    return num % 2 != 0;
}

int main()
{
    int arr[7];
    printf("Input 7 numbers:\n");
    inputArray(arr, 7);

    int positiveCount = 0;
    int negativeCount = 0;
    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < 7; i++)
    {
        if (isPositive(arr[i]))
        {
            positiveCount++;
        }
        else
        {
            negativeCount++;
        }

        if (isOdd(arr[i]))
        {
            oddCount++;
        }
        else
        {
            evenCount++;
        }
    }

    printf("Number of even values: %d\n", evenCount);
    printf("Number of odd values: %d\n", oddCount);
    printf("Number of positive values: %d\n", positiveCount);
    printf("Number of negative values: %d\n", negativeCount);
    
    return 0;
}