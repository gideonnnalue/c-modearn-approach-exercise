#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define CHAR_LEN 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char c;
    int word[CHAR_LEN] = {0}, i;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            word[tolower(c) - 'a']++;
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            word[tolower(c) - 'a']--;
    }

    for (i = 0; i < CHAR_LEN; i++)
    {
        if (word[i] > 0)
        {
            printf("The words are not anagrams\n");
            return 0;
        }
    }

    printf("The words are anagrams\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
}