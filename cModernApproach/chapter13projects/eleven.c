#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    char word[100];
    double length;

    printf("Enter a sentence: ");

    fgets(word, 100, stdin);

    length = compute_average_word_length(word);

    printf("Average word length: %.1f\n", length);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int words = 1;
    double length = 0.0;

    while (*++sentence)
    {
        if (*sentence == ' ')
            words++;
        else
            length++;
    }

    return length / words;
}