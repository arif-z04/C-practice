// Returning an Array using Static Memory

#include <stdio.h>
#include <stdlib.h>

int *createStaticArray(){

    static int arr[5];

    for(int i = 0; i < 5; i++){
        arr[i] = i + 1;
    }

    return arr;
}

int main()
{
    int *array = createStaticArray();

    printf("Static array element: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}