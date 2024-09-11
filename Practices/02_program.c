//count the occurance of a value in an array'

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    srand(time(0));
    for(int i = 0; i < size; i++){
        int mark = (rand() % (100 - 33 + 1)) + 33;
        arr[i] = mark;
    }

    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int *freq = (int*)calloc(max+1, sizeof(int));

    for(int i=0; i < size; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i <= max; i++){
        if(freq[i] > 0){
            printf("%d occurs %d time(s)\n", i, freq[i]);
        }
       // printf("freq[%d] = %d\n", i, freq[i]);
    }

    free(arr);
    free(freq);

    return 0;
    

}