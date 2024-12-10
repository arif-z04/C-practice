#include <stdio.h>

int main()
{
    int x, y;
    printf("Read the integer from keyboard- ");
    scanf("%d", &x);

    printf("Integer value = ");
    scanf("%d", &y);

    int new_val = x << 2;
    printf("The left shifted data is = %d\n", new_val);
    return 0;
}

// output has wrong.