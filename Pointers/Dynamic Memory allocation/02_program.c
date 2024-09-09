// calloc() - contiguous allocation
// similar to malloc() but inits the allocated memory to zero.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *arr = (int*)calloc(5, sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    srand(time(0));

    for(int i = 0; i < 5; i++){
        int rand_int = rand() % 100 + 1;
        arr[i] = rand_int; 
    }

    for(int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);

    return 0;
}