#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    clock_t tic, toc;
    int *arr;

    tic = clock();
    arr = malloc( 1000000 * sizeof(int));
    toc = clock();

    printf("malloc: %fs", 
            (double)(toc - tic)/
            CLOCKS_PER_SEC);
    
    free(arr);
    tic = clock();
    arr = calloc( 1000000, sizeof(int));
    toc = clock();

    printf("\ncalloc: %fs", 
            (double)(toc - tic)/
            CLOCKS_PER_SEC);
    free(arr);

}