// fill array with repeated values up to a given number 

#include <stdio.h>

int main(){
    int n;
    printf("Input an integer (2-10):\n");
    scanf("%d", &n);

    int arr[10];    
    for (int i = 0; i < 10; i++){
        arr[i] = i % n;
    }

    for (int i = 0; i < 10; i++){
        printf("array_nums[%d] = %d\n", i, arr[i]);
    }


    return 0;
}