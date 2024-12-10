#include <stdio.h>

int main(){
    int n, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    int org = n;

    while(n!=0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    printf("The original number: %d\n", org);
    printf("The reverse of the said number: %d\n", reversed);

    return 0;
}

