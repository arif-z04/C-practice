
#include <stdio.h>

int main(){
    int a, b;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    if(a % b == 0){
        printf("%d is a multiple of %d\n", a, b);
    } else {
        
        printf("%d is not a multiple of %d", a, b);
    }

    return 0;
}