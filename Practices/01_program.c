// Find the minimum and maximum number in an Array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_min(int *arr, int size);
int find_max(int *arr, int size);

int main(){
    int size = 0;
    int *arr;
    
    printf("Enter a size: ");scanf("%d", &size);
    
    arr = (int*)calloc(size, sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed! ");
        return 1;
    }
    srand(time(0));
    

    
    for(int i = 0; i < size; i++){
        int random_number = rand() % 1000 + 1;
        arr[i] = random_number;
    }
    printf("[");
    for(int i = 0; i < size; i++){
        if(i != size-1){
            printf("%d, ", arr[i]);
        }else{
            printf("%d]\n", arr[i]);
        }
    }

    int minimum = find_min(arr, size);
    int maximum = find_max(arr, size);
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    
    free(arr);
    return 0;
}

int find_min(int *arr, int size){
    int min;
    min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int find_max(int *arr, int size){
    int max;
    max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}