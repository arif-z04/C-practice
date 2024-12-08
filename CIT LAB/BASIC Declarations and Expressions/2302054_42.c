#include <stdio.h>

int main(){
    int a;

    printf("Input number of lines: ");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}