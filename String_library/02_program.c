// The strlen() function returns the number of characters in a string excluding the null terminator (\0).

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World"; 

    printf("Length of the string is: %lu\n", strlen(str));
    return 0;
}