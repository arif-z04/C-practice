#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int absolute_value = abs(n);

    printf("Original value: %d\n", n);    
    printf("Absolute value: %d\n", absolute_value);
        
    return 0;
}