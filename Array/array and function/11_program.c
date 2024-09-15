//Flattening a 3D array into 1D memory
#include <stdio.h>
#include <stdlib.h>

// Function to access the flattened 3D array
int accessFlattenedArray(int* arr, int rows, int cols, int depth, int i, int j, int k) {
    return arr[(i * cols * depth) + (j * depth) + k];
}

int main() {
    int rows = 2, cols = 3, depth = 4;
    
    // Dynamically allocate a flat block of memory
    int* array = (int*)malloc(rows * cols * depth * sizeof(int));
    
    // Fill the flat array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                array[(i * cols * depth) + (j * depth) + k] = i + j + k;
            }
        }
    }
    
    // Access and print the flattened array using helper function
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                printf("%d ", accessFlattenedArray(array, rows, cols, depth, i, j, k));
            }
            printf("\n");
        }
        printf("\n");
    }
    
    // Free the flat memory
    free(array);
    
    return 0;
}
