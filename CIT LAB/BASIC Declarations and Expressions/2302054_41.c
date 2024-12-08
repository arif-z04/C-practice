#include <stdio.h>

int main(){

    int r, c = 3;
    int count = 1;

    printf("Input the number of lines: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
    
}