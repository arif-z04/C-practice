//passing an array to a function 

#include <stdio.h>


void printArray(int arr[], int size){
    printf("Array elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array[5] = {10, 20, 30, 40, 50};

    printArray(array, 5);   
    return 0;
}