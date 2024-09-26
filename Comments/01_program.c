#include <stdio.h>

#define LENGTH 100

int main()
{
    int array[LENGTH] = {0,1,2,3,4,5,6,7,8,9};
    // computes the average of the array
    int total = 0; 
    for(int i = 0; i < LENGTH; i++){
        total += array[i];
    }

    printf("Total: %d\n", total);
    printf("Average: %d\n", total/10);
    return 0;
}