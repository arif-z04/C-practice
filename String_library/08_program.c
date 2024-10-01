// The strchr() function searches for the first occurrence of a character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    char *ptr = strchr(str, 'W');  // Find the first occurrence of 'W'
    
    if (ptr != NULL) {
        printf("Found character at position: %ld\n", ptr - str);  // Output: 7
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}

