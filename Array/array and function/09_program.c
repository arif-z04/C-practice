#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate a 2D array
int** create2DArray(int rows, int cols) {
    // Allocate memory for row pointers
    int** arr = (int**)malloc(rows * sizeof(int*));
    
    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    // Fill the array with values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;  // Example: filling with values 0, 1, 2, ...
        }
    }
    
    return arr;  // Return pointer to the 2D array
}

// Function to print a dynamically allocated 2D array
void print2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 4;
    int** array = create2DArray(rows, cols);  // Dynamically allocate a 2D array

    // Print the dynamically allocated array
    print2DArray(array, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);  // Free each row
    }
    free(array);  // Free the row pointers

    return 0;
}
