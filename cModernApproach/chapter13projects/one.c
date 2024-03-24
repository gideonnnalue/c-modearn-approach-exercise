#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

void get_word(char *word);
void get_first_word(char *word, char *smallest, char *largest);

int main(void)
{
    char ch;
    char smallest_word[MAX_LEN + 1], largest_word[MAX_LEN + 1], current_word[MAX_LEN + 1];

    get_first_word(current_word, smallest_word, largest_word);

    while (strlen(current_word) != 4)
    {
        get_word(current_word);

        if (strcmp(current_word, smallest_word) < 0)
            strcpy(smallest_word, current_word);

        if (strcmp(current_word, largest_word) > 0)
            strcpy(largest_word, current_word);
    }

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    return 0;
}

void get_word(char *word)
{
    printf("Enter word: ");
    scanf(" %s", word);
}

void get_first_word(char *word, char *smallest, char *largest)
{
    get_word(word);
    strcpy(smallest, word);
    strcpy(largest, word);
}