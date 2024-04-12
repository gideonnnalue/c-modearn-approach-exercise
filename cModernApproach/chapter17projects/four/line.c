// TODO: Complete later
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct word
{
    char string[MAX_LINE_LEN + 1];
    struct word *next;
};

struct word *words = NULL;
struct word *curWord;

char line[MAX_LINE_LEN + 1]; // contains line buffer of current line
int line_len = 0;            // number of characters in current line
int num_words = 0;           // number of words in the current line

void clear_line(void)
{
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct word *new_word;

    if ((new_word = malloc(sizeof(new_word))) == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    // if (num_words > 0)
    // {
    //     line[line_len] = ' ';
    //     line[line_len + 1] = '\0';
    //     line_len++;
    // }
    strcpy(new_word->string, word);
    if (words == NULL)
    {
        curWord = new_word;
        words = curWord;
    }
    else
    {
        curWord->next = new_word;
        curWord = new_word;
    }
    // strcat(line, word);
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (i = 0; i < line_len; i++)
    {
        if (line[i] != ' ')
            putchar(line[i]);
        else
        {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
            num_words--;
        }
    }
    putchar('\n');
}

void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}