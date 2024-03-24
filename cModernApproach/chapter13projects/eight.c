#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("%d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    const char *s = word;
    int sum = 0, values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    while (*s)
        sum += values[toupper(*s++) - 'A'];

    return sum;
}