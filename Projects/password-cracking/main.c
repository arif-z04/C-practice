#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>  // Include the time library for measuring elapsed time

#define PASSWORD "my123/.,"  // Example password to crack

unsigned long long attemptCount = 0;  // Counter for the number of attempts

// Function to generate combinations of characters
void bruteForceCrack(char *attempt, int position, int maxLen) {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()/.,[{}]|-=";  // Expanded character set
    int charsetSize = strlen(charset);

    if (position == maxLen) {
        // When maximum length is reached, check the password
        attemptCount++;
        if (strcmp(attempt, PASSWORD) == 0) {
            printf("Password found: %s\n", attempt);
            printf("Total attempts: %llu\n", attemptCount);
            exit(0);  // Exit once the password is found
        }
        return;
    }

    for (int i = 0; i < charsetSize; i++) {
        attempt[position] = charset[i];
        attempt[position + 1] = '\0';  // Null-terminate the string
        bruteForceCrack(attempt, position + 1, maxLen);  // Recurse to the next position
    }
}

int main() {
    int maxLen = 9;  // Maximum length of the password to try
    char attempt[maxLen + 1];  // Buffer to store the current attempt

    // Start measuring time
    clock_t startTime = clock();
    
    printf("Starting brute-force password cracking...\n");
    for (int len = 1; len <= maxLen; len++) {
        bruteForceCrack(attempt, 0, len);
    }

    // Stop measuring time and calculate the elapsed time
    clock_t endTime = clock();
    double timeSpent = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("Password not found. Total attempts: %llu\n", attemptCount);
    printf("Time spent: %.2f seconds\n", timeSpent);

    return 0;
}
