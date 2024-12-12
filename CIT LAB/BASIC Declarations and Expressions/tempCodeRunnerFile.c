#include <stdio.h>

int main(){
    int n; 
    printf("Input the size of the square: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

}