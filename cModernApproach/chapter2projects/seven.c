#include <stdio.h>

int main(int argc, char const *argv[])
{
    int amount = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenties = amount / 20;
    amount = amount % 20;

    int tens = amount / 10;
    amount = amount % 10;

    int fives = amount / 5;
    amount = amount % 5;

    int ones = amount / 1;
    amount = amount % 1;


    printf("\n$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    return 0;
}
