#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int numbers[20];

    srand(time(0));
    
    for(int i=0; i<20; i++){
        
        numbers[i] = rand();
        printf("%d\n", numbers[i]);
    }
    return 0;
}