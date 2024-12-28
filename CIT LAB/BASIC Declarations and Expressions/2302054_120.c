#include <stdio.h>

int main(){
    int n;
    printf("Input a number:\n");
    scanf("%d", &n);
    printf("Sequence:\n");
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        if(i < n){
            printf(", ");
        }
    }
    return 0;
}