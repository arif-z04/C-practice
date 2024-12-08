#include <stdio.h>
int main() {
    int a, b, l;

    printf("Input number of lines: ");
    scanf("%d", &a);
    printf("Number of numbers in a line: ");
    scanf("%d", &b);

    for(int i = 1, l = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++){
            printf("%d ", l);		
            l++; 
        }   
        printf("\n");
    }

    return 0;
}
