#include <stdio.h>

int main()
{
    int x, y;

    printf("Input the value for x & y: ");
    scanf("%d%d", &x, &y);

    printf("Before swapping the value of x & y: %d %d\n", x, y);

    x = x + y; 
    y = x - y;
    x = x - y;

    printf("After swapping the vlaue of x & y: %d %d\n", x, y);
    return 0;

}