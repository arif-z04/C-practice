#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[20] = {};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    srand(time(0));


    for(int i = 0; i<length; i++){
        int randNum = (rand()%100)+1 ;
        numbers[i] = randNum;          
    }

    for(int j = 0; j<length; j++){
        printf("%d ", numbers[j]);
    }

    return 0;
}