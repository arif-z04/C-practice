#include <stdio.h>

int main(){
    int a, b;

    printf("Input 2 integers: ");
    scanf("%d %d", &a, &b);

    if(b % a == 0) printf("Multiplies.");
    else printf("Not multiple.");

    return 0;
}