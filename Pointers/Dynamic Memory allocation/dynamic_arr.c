#include <stdio.h>
#include <stdlib.h>

int main(){

    int *arr = NULL;
    int size = 0;
    int capacity = 2;

    arr = (int*)malloc(capacity * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    int input;
    while(scanf("%d", &input)==1){
        arr[size] = input;
        size++;

        if(size == capacity){
            capacity *= 2;
            arr = (int*)realloc(arr, capacity * sizeof(int));
            if(arr == NULL){
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);

    return 0;
}