#include <stdio.h>

#define MATRIX_LEN 5

int main(void)
{
    int matrix[MATRIX_LEN][MATRIX_LEN], sum = 0;

    for(int i = 0; i < MATRIX_LEN; i++)
    {
        printf("Enter row %d: ", i + 1);
        for(int j = 0; j < MATRIX_LEN; j++)
            scanf("%d", &matrix[i][j]);
        
    }

    printf("\nRow totals: ");
    for(int i = 0; i < MATRIX_LEN; i++)
    {
        sum = 0;
        for(int j = 0; j < MATRIX_LEN; j++)
            sum += matrix[i][j];

        printf(" %d", sum);
    }

    printf("\nColumn totals: ");
    for(int i = 0; i < MATRIX_LEN; i++)
    {
        sum = 0;
        for(int j = 0; j < MATRIX_LEN; j++)
            sum += matrix[j][i];

        printf(" %d", sum);
    }
    printf("\n");

    return 0;
}
