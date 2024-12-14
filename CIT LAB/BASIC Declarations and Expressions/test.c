#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k, sum = 0;

    printf("Enter rows and columns for first matrix:");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix:");
    scanf("%d %d", &r2, &c2);
    while (c1 != r2)
    {
        printf("Error! column of first matrix is not equal to row of second row\n");
        printf("Enter rows and columns for first matrix:");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix:");
        scanf("%d %d", &r2, &c2);
    }
    printf("First Matrix\n");

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
        {
            printf("[%d][%d] = ", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("A matrix =\n");
    for (i = 0; i < r1; i++)
    {
        // printf("\t");
        for (j = 0; j < c1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Second Matrix\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("[%d][%d]=", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    printf("B matrix=\n");
    for (i = 0; i < r2; i++)
    {

        // printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    printf("Result matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    
    for (i = 0; i < r1; i++)
    {
        // printf("");
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}