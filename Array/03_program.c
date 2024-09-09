#include <stdio.h>

int main()
{
    
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%lu\n", sizeof(myNumbers)); 
    
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length);
    
    return 0;
}