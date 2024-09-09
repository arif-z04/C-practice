#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int *array;
} Data;


int main(){
    Data x;
    Data y;

    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);

    printf("------------------\n");    
    for(int i = 0; i < 5; i++){
        x.array[i] = 1 + i;
        printf("x.array[%d] = %d\n", i, 1+i);
    }

    printf("------------------\n");
    for(int j = 0; j < 5; j++){
        y.array[j] = 9;
        printf("y.array[%d] = 9\n", j);
    }

    x = y;
    
    printf("------------------\n");    
    for(int i = 0; i < 5; i++){
        printf("x.array[%d] = %d\n", i, x.array[i]);    
    }    
    
    printf("------------------\n");
    for(int i = 0; i < 5; i++){
        printf("y.array[%d] = %d\n", i, y.array[i]);
    }

    x.array[0] = 10;

    printf("------------------\n");
    for(int i = 0; i < 5; i++){
        printf("y.array[%d] = %d\n", i, y.array[i]);
    }
}