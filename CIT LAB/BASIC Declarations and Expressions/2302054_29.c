#include <stdio.h>

int is_odd(int n){
    if(n % 2!=0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int numbers[5], total=0;

    printf("Input the first number: ");
    scanf("%d", &numbers[0]);
    printf("Input the second number: ");
    scanf("%d", &numbers[1]);
    printf("Input the third number: ");
    scanf("%d", &numbers[2]);
    printf("Input the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("Input the fifth number: ");
    scanf("%d", &numbers[4]);
    
    for(int i = 0; i < 5; i++){
        if(is_odd(numbers[i])){
            total+=numbers[i];
        }
    }

    printf("Sum of all odd values: %d\n", total);
    return 0;
}