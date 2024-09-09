// Reversing String using Array method!! 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Array to store the string
    int length, i;

    // Get the input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string
    length = strlen(str);

    // Reverse the string using a loop
    for (i = 0; i < length / 2; i++) {
        // Swap the characters
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
