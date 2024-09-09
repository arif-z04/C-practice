/*
Difference between sizeof() and strlen()

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "Hello World!";
    int length = strlen(myString);
    int len = sizeof(myString)/sizeof(myString[0]);

    printf("Length: %d\n", length);
    printf("Len: %d\n", len);
    return 0;
}
/*
strlen() counts the actual characters in the string but excludes the null terminator.
sizeof() returns the total size of the array, which includes the null terminator.
*/