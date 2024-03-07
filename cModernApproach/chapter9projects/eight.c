#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char c = 'y';
    int wins = 0, losses = 0;
    bool game_start;

    srand((unsigned)time(NULL));

    do
    {
        if (tolower(c) == 'y')
        {
            play_game() ? wins++ : losses++;
            printf("Play again? ");
        }
        
    } while ((c = getchar()) != 'n');

    printf("Wins: %d\t\tLosses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}

bool play_game(void)
{
    int is_winner = -1;
    int point = roll_dice(), roll;

    printf("\n\nYou rolled: %d\n", point);

    if (point == 7 || point == 11)
        is_winner = 1;
    else if (point == 2 || point == 3 || point == 12)
        is_winner = 0;
    else
        printf("Your point is: %d\n", point);

    while (is_winner == -1)
    {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);

        if (roll == point)
        {
            is_winner = 1;
            break;
        }

        if (roll == 7)
        {
            is_winner = 0;
            break;
        }
    }

    printf("You %s!\n\n", is_winner ? "win" : "lose");

    return (bool)is_winner;
}