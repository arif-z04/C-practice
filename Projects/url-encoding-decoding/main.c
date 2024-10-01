#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encodeURL(const char *input, char *output){
    while(*input){
        if(*input==' '){
            // Replace space with %20
            strcpy(output, "%20");
            output+=3;
        } else if (*input == '!'){
            strcpy(output, "%21");
            output+=3;
        } else if (*input == '#'){
            strcpy(output, "%23");
            output += 3; 
        } else {
            *output = *input;
            output++;
        }
        input++;
    }
    *output = '\0';
}

void decodeURL(const char *input, char *output){
    while (*input) {
        if (*input == '%' && *(input + 1) == '2' && *(input + 2) == '0') {
            // Replace %20 with space
            *output = ' ';
            input += 3; // Skip the %20 part
        } else if (*input == '%' && *(input + 1) == '2' && *(input + 2) == '1') {
            // Replace %21 with '!'
            *output = '!';
            input += 3; // Skip the %21 part
        } else if (*input == '%' && *(input + 1) == '2' && *(input + 2) == '3') {
            // Replace %23 with '#'
            *output = '#';
            input += 3; // Skip the %23 part
        } else {
            // Copy normal character
            *output = *input;
            input++;
        }
        output++; // Move to the next character in the output
    }
    *output = '\0'; 
}

int main() {
    char input[100], output[300]; // Output has more space for encoding
    int choice;
    
    printf("Enter a string (URL) to encode/decode: ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; // Remove newline character at the end

    printf("Choose an option:\n");
    printf("1. Encode URL\n");
    printf("2. Decode URL\n");
    scanf("%d", &choice);

    if (choice == 1) {
        // Encoding the URL
        encodeURL(input, output);
        printf("Encoded URL: %s\n", output);
    } else if (choice == 2) {
        // Decoding the URL
        decodeURL(input, output);
        printf("Decoded URL: %s\n", output);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}