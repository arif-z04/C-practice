// Print position of array elements

#include <stdio.h>

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{

    int arr[7];
    printf("Input 7 array elements:\n");
    inputArray(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        if(arr[i] <= 0){
            printf("array_nums[%d] = %d\n", i, arr[i]);
        }
    }
}