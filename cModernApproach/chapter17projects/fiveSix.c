#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 20

char **words;
char *word;

int pos = 0;
int words_len = 1;

int read_line(char str[], int n);
int compare_words(const void *w1, const void *w2);

int main(void)
{
    words = malloc(sizeof(word));

    if (words == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    for (;;)
    {

        if ((word = malloc(sizeof(char *) * (MAX_WORD_LEN + 1))) == NULL)
        {
            printf("Error: malloc failed\n");
            exit(EXIT_FAILURE);
        }
        printf("Enter word: ");

        read_line(word, MAX_WORD_LEN + 1);
        if (word[0] == '\0')
            break;

        *(words + pos) = word;
        pos++;

        if (pos == words_len)
        {
            words = realloc(words, sizeof(char **) * (words_len += 1));
            if (words == NULL)
            {
                printf("Error: malloc failed\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    qsort(words, pos, sizeof(char *), compare_words);

    for (int i = 0; i < pos; i++)
        printf("%s\n", words[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int compare_words(const void *w1, const void *w2)
{
    return strcmp(*(char **)w1, *(char **)w2);
}