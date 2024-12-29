// Replace negative/null elements of an array with 1

#include <stdio.h>

void input_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
int main(){
    int n;
    printf("Input 7 array elements:\n");

    int arr[7];
    input_array(arr, 7);

    for (int i = 0; i < 7; i++){
        if (arr[i] <= 0){
            arr[i] = 1;
        }
    }

    printf("\nArray elements:\n");

    for(int i = 0; i < 7; i++){
        printf("array_nums[%d] = %d\n", i, arr[i]);
    }

    return 0;
}