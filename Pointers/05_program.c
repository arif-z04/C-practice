#include <stdio.h>

int main(){
    int a, b, c;
    a = b = c = 0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("result: %d\n", a+b+c);

    return 0;
}
