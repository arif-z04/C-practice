#include <stdio.h>
#include <stdlib.h>

// Function to create a 2D array with variable columns
int** createVariableArray(int rows, int* col_sizes) {
    int** array = (int**)malloc(rows * sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(col_sizes[i] * sizeof(int));
        
        // Fill the array with values (example: setting values to row index)
        for (int j = 0; j < col_sizes[i]; j++) {
            array[i][j] = i + j;  // Filling with example values
        }
    }
    
    return array;  // Return the array pointer
}

// Function to print the variable-column 2D array
void printVariableArray(int** arr, int rows, int* col_sizes) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col_sizes[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int col_sizes[3] = {2, 4, 3};  // Column sizes for each row
    
    // Create the variable-column 2D array
    int** array = createVariableArray(rows, col_sizes);
    
    // Print the array
    printVariableArray(array, rows, col_sizes);
    
    // Free memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    
    return 0;
}
