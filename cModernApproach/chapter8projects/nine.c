#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LEN 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main(void)
{
    char matrix[ARRAY_LEN][ARRAY_LEN] = {'.'}, curr_letter = 'A';
    int move = 0, curr_row = 0, curr_column = 0, move_round = 1;

    for (int i = 0; i < ARRAY_LEN; i++)
    {
        for (int j = 0; j < ARRAY_LEN; j++)
        {
            matrix[i][j] = '.';
        }
    }

    srand((unsigned)time(NULL));

    matrix[0][0] = curr_letter;

    while (move_round <= 4 && curr_letter < 'Z')
    {
        move = rand() % 4;
        printf("Move: %d\n", move);

        if (move == UP && curr_row - 1 >= 0 && matrix[curr_row - 1][curr_column] == '.')
        {
            curr_row--;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            matrix[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == DOWN && curr_row + 1 <= 9 && matrix[curr_row + 1][curr_column] == '.')
        {
            curr_row++;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            matrix[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == RIGHT && curr_column + 1 <= 9 && matrix[curr_row][curr_column + 1] == '.')
        {
            curr_column++;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            matrix[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == LEFT && curr_column - 1 >= 0 && matrix[curr_row][curr_column - 1] == '.')
        {
            curr_column--;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            matrix[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else
        {
            move_round++;
        }
    }

    for (int i = 0; i < ARRAY_LEN; i++)
    {
        for (int j = 0; j < ARRAY_LEN; j++)
        {
            printf("%2c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
