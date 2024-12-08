#include <stdio.h>

int main(){
    int a, b, total = 0;
    
    printf("Input a pair of numbers(for example 10, 2):\n");
    printf("Input first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if(a < b) return 0;
    
    printf("List of odd numbers: ");
    for(int i = b; i <= a; i++){
        if(i % 2 != 0) {
            printf("%d\n", i);
            total += i;
        }
    }

    printf("Sum=%d\n", total);
}