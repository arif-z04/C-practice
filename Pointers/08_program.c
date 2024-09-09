// pass by Reference. 
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){

    int x = 5;
    int y = 10;
    swap(&x, &y);
    
    printf("x: %d\ny: %d\n", x, y);
}
