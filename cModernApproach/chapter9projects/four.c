#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define CHAR_LEN 26

void read_word(int counts[CHAR_LEN]);
bool equal_array(int counts1[CHAR_LEN], int counts2[CHAR_LEN]);

int main(void)
{
    int counts1[CHAR_LEN] = {0},
        counts2[CHAR_LEN] = {0};

    bool is_anagram = true;

    printf("Enter first word: ");
    read_word(counts1);

    printf("Enter second word: ");
    read_word(counts2);
    is_anagram = equal_array(counts1, counts2);

    is_anagram ? printf("The words are anagrams\n") : printf("The words are not anagrams\n");

    return 0;
}

void read_word(int counts[CHAR_LEN])
{
    char c;

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
            counts[tolower(c) - 'a']++;
    }
}

bool equal_array(int counts1[CHAR_LEN], int counts2[CHAR_LEN])
{
    int i;

    for (i = 0; i < CHAR_LEN; i++)
    {
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    }

    return true;
}