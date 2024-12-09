#include <stdio.h>

int main()
{
    int numbers[5];

    int length = sizeof(numbers)/sizeof(numbers[0]);
    
    for(int i = 0; i < length; i++){
        scanf("%d", &numbers[i]);
    }
    
    int min;
    min = numbers[0];
    
    for(int i = 0; i < length; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }

    printf("Smallest Value: %d\n", min);

    return 0;
}