#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int size = 0; 
    int *junk = 0;

    srand(time(0));
    
    for(int i = 0; i<1000; i++){
        size = rand() % 16000 + 1;
        junk = malloc(size * sizeof(int));

        for(int j = 0; j < size; j++){
            junk[j] = rand();
        }
        free(junk);
    }

    int *arr;
    // arr = malloc(1000 * sizeof(int));
    arr = calloc( 1000, sizeof(int));
    for(int i = 0; i < 1000; i++){
        printf("%d\t", arr[i]);
    }
    free(arr);

    return 0;
}