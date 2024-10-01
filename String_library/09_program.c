// The strrchr() function searches for the last occurrence of a character in a string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'o');
   
    if(ptr != NULL){
        printf("Found character at position: %ld\n", ptr - str);
    }else{
        printf("Character not found.\n");
    }

    return 0;
}