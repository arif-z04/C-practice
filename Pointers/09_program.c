// passing an array to a Function

#include <stdio.h>
#include <stdlib.h>

void array_add(int array[]);
void array_add_ptr(int *array);

int main(){
    int myarray[5] = {1,2,3,4,5};
    array_add(myarray);

    printf("myarray[0]: %d\n", myarray[0]);
    printf("myarray: %p\n", myarray); 
    printf("------------------\n");
    array_add_ptr(myarray);
    printf("myarray[0]: %d\n", myarray[0]);
    printf("myarray: %p\n", myarray); 
    
    return 0;
}

void array_add(int array[]){
    printf("array: %p\n", array);
    array[0] = array[0] + 1;
}

void array_add_ptr(int *array){
    printf("array: %p\n", array);
    array[0] = array[0] + 1;
}