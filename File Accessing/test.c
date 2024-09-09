
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    FILE *fh = fopen("05_program.txt", "w+");
    
    int amount, higher, lower;
    srand(time(0));

    printf("How many numbers you want to generate?: ");
    scanf("%d", &amount);
    
    printf("Range?\nHigher: ");
    scanf("%d", &higher);
    
    printf("Lower: ");
    scanf("%d", &lower);

    // Generate random numbers and write to file
    for (int i = 0; i < amount; i++) {
        int random_number = (rand() % (higher - lower + 1)) + lower;
        fprintf(fh, "%d\n", random_number);
    }

    fclose(fh);  // Close file after writing

    // Ask if the user wants to sort the data
    char choice = '\0';
    printf("Do you want to sort the data? (y/n): ");
    scanf(" %c", &choice);  // Added space before %c to consume leftover newline

    if (choice == 'y' || choice == 'Y') {
        // Reopen the file for reading
        fh = fopen("05_program.txt", "r");
        if (fh == NULL) {
            printf("Error opening the file for reading!\n");
            return 1;
        }

        // Read the numbers from the file into an array
        int numbers[amount];
        for (int i = 0; i < amount; i++) {
            fscanf(fh, "%d", &numbers[i]);
        }

        fclose(fh);  // Close the file after reading

        // Sort the array
        sortArray(numbers, amount);

        // Reopen the file for writing to save sorted numbers
        fh = fopen("05_program.txt", "w");
        if (fh == NULL) {
            printf("Error opening the file for writing!\n");
            return 1;
        }

        // Write sorted numbers back to the file
        for (int i = 0; i < amount; i++) {
            fprintf(fh, "%d\n", numbers[i]);
        }

        printf("The data has been sorted and written to the file.\n");
    }

    // Close the file before exiting
    fclose(fh);

    return 0;
}
