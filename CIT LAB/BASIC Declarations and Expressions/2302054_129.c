// replace array elements with one-third of the previous
#include <stdio.h>

int main(){
    double n;
    double arr[10];

    printf("Input an integer(2-10):\n");
    scanf("%lf", &n);

    arr[0] = n;

    for(int i = 1; i < 10; i++){
        n = n/3;
        arr[i] = n;
    }

    printf("Array elements:\n");
    for(int i = 0; i < 10; i++){
        printf("array_nums[%d] = %.4lf\n", i, arr[i]);
    }
    return 0;
}