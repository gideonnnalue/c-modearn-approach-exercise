#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LEN 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char matrix[ARRAY_LEN][ARRAY_LEN] = {'.'};
    srand((unsigned)time(NULL));

    generate_random_walk(matrix);
    print_array(matrix);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    char curr_letter = 'A';
    int move = 0, curr_row = 0, curr_column = 0, move_round = 1;

    for (int i = 0; i < ARRAY_LEN; i++)
    {
        for (int j = 0; j < ARRAY_LEN; j++)
        {
            walk[i][j] = '.';
        }
    }


    walk[0][0] = curr_letter;

    while (move_round <= 4 && curr_letter < 'Z')
    {
        move = rand() % 4;
        printf("Move: %d\n", move);

        if (move == UP && curr_row - 1 >= 0 && walk[curr_row - 1][curr_column] == '.')
        {
            curr_row--;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            walk[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == DOWN && curr_row + 1 <= 9 && walk[curr_row + 1][curr_column] == '.')
        {
            curr_row++;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            walk[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == RIGHT && curr_column + 1 <= 9 && walk[curr_row][curr_column + 1] == '.')
        {
            curr_column++;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            walk[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else if (move == LEFT && curr_column - 1 >= 0 && walk[curr_row][curr_column - 1] == '.')
        {
            curr_column--;
            printf("Next Letter %c: Next Row: %d: Next Column: %d, Next Move: %d\n", curr_letter + 1, curr_row, curr_column, move);
            walk[curr_row][curr_column] = ++curr_letter;
            move_round = 1;
        }
        else
        {
            move_round++;
        }
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < ARRAY_LEN; i++)
    {
        for (int j = 0; j < ARRAY_LEN; j++)
        {
            printf("%2c", walk[i][j]);
        }
        printf("\n");
    }
}