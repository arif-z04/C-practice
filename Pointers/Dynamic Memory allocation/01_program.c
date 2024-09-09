// using malloc()

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int*)malloc(sizeof(int)*5);

    //error handling
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    //use the allocated memory
    for(int i = 0; i < 5; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n",i,arr[i]); 
    }

    free(arr);

    return 0;
}
