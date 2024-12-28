// Find and print all divisor of an integer

#include <stdio.h>

int main(){
    int n;
    printf("Input an integer:\n");
    scanf("%d", &n);
    printf("All positive divisor of %d\n", n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}