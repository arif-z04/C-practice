#include <stdio.h> 

int main(){
    double numbers[5];
    printf("Input the 5 members of the array: \n");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &numbers[i]);
    }

    for(int i = 0; i < 5; i++){
        if(numbers[i] < 5){
            printf("A[%d] = %.2lf\n", i, numbers[i]);
        }
    }

    return 0;
}