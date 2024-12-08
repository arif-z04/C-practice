#include <stdio.h>

int main(){
    int numbers[5];
    int length = sizeof(numbers)/sizeof(numbers[0]);

    printf("Input the 5 members of the array: \n");

    for(int i = 0; i < length; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Array values are: ");
    for(int j = 0; j < length; j++){
        printf("n[%d] = %d\n", j, numbers[j]);
    }


    return 0;
}