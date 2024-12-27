#include <stdio.h>

int main()
{
    int a, b, sum = 0, start, end;
    float avg;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        start = b;
        end = a;
    } else {
        start = a;
        end = b;
    }

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    avg = (float)sum / (end - start + 1);

    printf("\nSequence from lowest to highest number: \n");

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\nAverage value of the said sequence\n%.2f\n", avg);
    return 0;
}