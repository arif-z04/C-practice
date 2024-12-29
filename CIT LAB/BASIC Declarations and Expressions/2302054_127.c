// Reverse the first and last elements of an array

#include <stdio.h>


void input_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("array_nums[%d] = %d\n", i, arr[i]);
    }
}

int main(){
    int n;
    printf("Input 8 array elements:\n");

    int arr[8];
    input_array(arr, 8);

    int temp = arr[0];
    arr[0] = arr[7];
    arr[7] = temp;

    printf("\nModified array: \n");
    print_array(arr, 8);

    return 0;
}