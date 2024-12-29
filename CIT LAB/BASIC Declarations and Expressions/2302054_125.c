// Replace first elements of array and double subsequent values

#include <stdio.h>

int main(){

    int n;
    
    printf("Input the first element of the array:\n");
    scanf("%d", &n);

    int arr[7];
    arr[0] = n;

    for (int i = 1; i < 7; i++){
        arr[i] = 2 * n;
        n = arr[i];
    }

    printf("\nArray elements:\n");

    for(int i = 0; i < 7; i++){
        printf("array_nums[%d] = %d\n", i, arr[i]);
    }

    return 0;
}