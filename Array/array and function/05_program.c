#include <stdio.h>

// Function to print a 2D array
void print2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2D array with 2 rows and 3 columns
    
    // Pass the 2D array to the function
    print2DArray(array, 2);  // Note: Only need to pass the number of rows

    return 0;
}
