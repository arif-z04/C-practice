// The strncpy() function copies up to a specified number of characters from one string to another.
#include <stdio.h>
#include <string.h>

int main(){
    char src[] = "Hello, World!";
    char dest[10];

    strncpy(dest, src, 5);
    dest[5] = '\0';

    printf("Copied string: %s\n", dest);

    return 0;
}