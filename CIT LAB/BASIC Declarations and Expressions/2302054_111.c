// Print numbers (1–100) leaving a remainder of 3 when divided by input number

#include <stdio.h>

int main()
{
    int n;
    printf("Input an integer: ");
    scanf("%d", &n);

    printf("Remainder value 3 after divide all numbers between 1 and 100 by %d:\n", n);
    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}