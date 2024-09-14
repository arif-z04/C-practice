//modifying arrays in Functions

#include <stdio.h>

void doubleArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    doubleArray(array, 5);

    printf("Modified array: ");

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}