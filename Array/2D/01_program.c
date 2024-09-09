#include <stdio.h>

int main()
{
    int numbers[3][3];
    int num = 1;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++){
            numbers[i][j] = num;
            num++;    
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}