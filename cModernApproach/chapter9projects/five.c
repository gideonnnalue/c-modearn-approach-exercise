#include <stdio.h>

void create_magic_square(int n, int char_magic_square[n][n]);
void print_magic_square(int n, int char_magic_square[n][n]);

int main(void)
{
    int n, row, col, curr_row, curr_col, curr_value;

    printf("This program creates a magic square of specified size.\n");
    printf("The size must be an odd number between 1 and 99.");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];

    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, int char_magic_square[n][n])
{
    int row, col, curr_row, curr_col, curr_value;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            char_magic_square[i][j] = 0;
    }

    curr_col = n / 2;
    curr_row = 0;
    char_magic_square[curr_row][curr_col] = 1;

    curr_value = 2;

    while (n * n >= curr_value)
    {
        row = curr_row - 1;
        col = curr_col + 1;

        if (row < 0)
            row = n - 1;

        if (col > n - 1)
            col = 0;

        if (char_magic_square[row][col] > 0)
        {
            row = curr_row + 1;
            col = curr_col;
        }

        if (char_magic_square[row][col] == 0)
            char_magic_square[row][col] = curr_value;

        curr_value++;
        curr_col = col;
        curr_row = row;
    }
}

void print_magic_square(int n, int char_magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", char_magic_square[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}