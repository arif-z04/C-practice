// sum odd and even numbers between two integers

#include <stdio.h>

int main()
{
    int a, b;
    int sum_odd = 0;
    int sum_even = 0;

    printf("Input 2 integers: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }

    printf("Sum of all odd values between %d and %d: %d\n", a, b, sum_odd);
    printf("Sum of all even values between %d and %d: %d\n", a, b, sum_even);
    return 0;
}