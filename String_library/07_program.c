//The strncmp() function compares up to a specified number of characters from two strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "application";
    
    int result = strncmp(str1, str2, 3);  // Compare the first 3 characters
    
    if (result == 0) {
        printf("First 3 characters are equal.\n");  // Output: First 3 characters are equal
    } else {
        printf("First 3 characters are not equal.\n");
    }
    
    return 0;
}
