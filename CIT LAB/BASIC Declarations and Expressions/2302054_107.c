// print next 10 odd and even numbers after a given integer

#include <stdio.h>

int main()
{
    int n;
    printf("Input an integer: ");
    scanf("%d", &n);

    printf("Next 10 consecutive odd numbers after %d:\n", n);
    for (int i = n + 1; i < n + 21; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nNext 10 consecutive even numbers after %d:\n", n);
    for (int i = n + 1; i < n + 21; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}