// The strstr() function searches for the first occurrence of a substring in another string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    char *ptr = strstr(str, "World");  // Find the substring "World"
    
    if (ptr != NULL) {
        printf("Substring found at position: %ld\n", ptr - str);  // Output: 7
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
