// sum of even numbers between two integers

#include <stdio.h>

int main()
{
    int a, b, sum = 0, start, end;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        start = b;
        end = a;
    } else {
        start = a;
        end = b;
    }

    if (start % 2 != 0) {
        start++;
    }

    for (int i = start; i <= end; i += 2) {
        sum += i;
    }

    printf("\nSum of all even values between %d and %d\n%d\n", a, b, sum);
    return 0;
}