#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    if (a > b){
        printf("Descending order\n");
    } else if (a < b){
        printf("Ascending order\n");
    } else {
        printf("Equal\n");
    }
    return 0;
}