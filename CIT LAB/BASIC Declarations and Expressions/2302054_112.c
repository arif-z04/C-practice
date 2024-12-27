// Find max value and position from 7 integers

#include <stdio.h>

int main()
{
    int arr[7];
    int max = 0;
    int pos = 0;

    printf("Input 7 integers:\n");
    
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i + 1;
        }
    }

    printf("Max value: %d\n", max);
    printf("Position: %d\n", pos);

    return 0;
}