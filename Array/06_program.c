#include <stdio.h>

int main()
{
    int matrix[2][3] = {{1,3,5}, {3,6,8}};
    int i, j;
    for(i = 0; i<2; i++){
        for(j = 0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
    }
    return 0;
}