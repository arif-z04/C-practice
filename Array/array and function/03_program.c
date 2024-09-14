// Returning arrays from function 

#include <stdio.h>
#include <stdlib.h>

int* createArray(int size){

    int *arr = (int*)malloc(size * sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed! ");
        return NULL;
    }
    for(int i = 0; i < size; i++){
        arr[i] = i+1;

    }
    return arr;
}

int main(){
    int size = 5; 
    int *array = createArray(size);

    if(array != NULL){
        printf("Created array: ");
        for(int i = 0; i < size; i++){
            printf("%d ", array[i]);
        }
        printf("\n");

        free(array); //Free the dynamically allocated memory;
    }

    return 0;
}