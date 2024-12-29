// replace array elements with one-third of the previous
#include <stdio.h>

int main(){
    int n;
    printf("Input an integer:\n");
    scanf("%d", &n);

    int arr[10];
    arr[0] = n;
    for (int i = 1; i < 10; i++){
        arr[i] = arr[i-1] / 3;
    }

    for (int i = 0; i < 10; i++){
        printf("array_nums[%d] = %d\n", i, arr[i]);
    }

    return 0;
}