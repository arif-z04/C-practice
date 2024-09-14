// returning a pointer to a dynamiccally allocated 2D array

#include <stdio.h>
#include <stdlib.h>

int **create2Darray(int rows, int cols) {
    int **arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));   
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Row %d Column %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    return arr;
}

int main(){    
    
    int rows, cols; 
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int ** arr = create2Darray(rows, cols);
    printf("2D array:\n");
    for(int i = 0; i < rows; i++){
        printf("| ");
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("|\n");
    }
    
    //Free dynamically allocated memory
    for(int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}