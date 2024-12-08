#include <stdio.h>
#include <stdbool.h>

int is_even(int n){
    int flag = 0;
    if(n % 2 == 0){
        flag = 1;
    } else {
        flag = 0;
    }
    return flag;
}

int main()
{
    int nums[5], total = 0;

    printf("Input the first number: ");
    scanf("%d", &nums[0]);
    printf("Input the second number: ");
    scanf("%d", &nums[1]);
    printf("Input the third number: ");
    scanf("%d", &nums[2]);
    printf("Input the fourth number: ");
    scanf("%d", &nums[3]);
    printf("Input the fifth number: ");
    scanf("%d", &nums[4]);

    for(int i = 0; i < 5; i++){
        if(!is_even(nums[i])){
            total += nums[i];
        }
    }
    printf("Sum of all odd values: %d\n", total);

    return 0;
}