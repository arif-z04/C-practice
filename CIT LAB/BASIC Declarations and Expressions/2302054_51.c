#include <stdio.h>

int main()
{
    int numbers[5];
    int length = sizeof(numbers)/sizeof(numbers[0]);

    printf("Input the 5 members of the array:\n ");

    for(int i = 0; i < length; i++){
        scanf("%d", &numbers[i]);
    }   

    for(int i = 0; i < length; i++){
        printf("array_n[%d] = %d\n", i, numbers[length - i - 1]);
    }
    return 0;
}