#include <stdio.h>

int main(){
    int n;
    printf("Input the size of the square: ");
    scanf("%d", &n);
    if(n < 1 || n > 10){
        printf("Invalid input.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}