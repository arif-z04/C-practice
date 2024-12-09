#include <stdio.h>

int main(){
    int number[5];
    int x;
    printf("Input the first numebr of the array: \n");
    scanf("%d", &x);
    for(int i = 0; i < 5; i++){
        number[i] = x;
        x *= 3;
    }
    for(int i = 0; i < 5; i++){
        printf("n[%d] = %d\n", i, number[i]);
    }
    return 0;
}