#include <stdio.h>

int main(){
    int n;
    int pos_count = 0;
    int sum_pos = 0;
    int max = 0, min = 1e9;

    while(1){
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if(n<=0) break;
        
        if(n > max) max = n;
        if(n < min) min = n;

        pos_count++;
        sum_pos = sum_pos + n;
    }

    float Avg = (float) sum_pos / pos_count; // eta k bole typecasting, data_type change kora jay.

    printf("Number of positive value entered is %d\n", pos_count);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Avarage value is %f\n", Avg);
    return 0;
}