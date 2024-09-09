#include <stdio.h>
#include <stdlib.h>

void memory_hog(int size);

int main(){

    // while(1){
    //     memory_hog(1280000);
    // }
    return 0;
}

void memory_hog(int size)
{int *a = malloc(size);}