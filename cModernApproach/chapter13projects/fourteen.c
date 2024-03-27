#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define CHAR_LEN 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[100], word2[100];
    int word[CHAR_LEN] = {0}, i;

    printf("Enter first word: ");
    fgets(word1, 100, stdin);

    printf("Enter second word: ");
    fgets(word2, 100, stdin);

    printf("The words are%sanagrams\n", are_anagrams(word1, word2) ? " " : " not ");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int word[CHAR_LEN] = {0}, *p = word;

    while (*word1)
    {
        if (isalpha(*word1))
            word[tolower(*word1) - 'a']++;
        word1++;
    }

    while (*word2)
    {
        if (isalpha(*word2))
            word[tolower(*word2) - 'a']--;
        word2++;
    }

    while (*p)
    {
        if (*p != 0)
            return false;
        p++;
    }

    return true;
}