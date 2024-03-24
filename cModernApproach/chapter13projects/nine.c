#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);
int read_line(char str[], int n);

int main(void)
{
    int count = 0;
    char c, word[100];

    printf("Enter a sentence: ");
    read_line(word, 100);

    printf("Your sentence contains %d vowels\n", compute_vowel_count(word));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int count = 0;

    while (*sentence)
    {
        switch (toupper(*sentence++))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:
            break;
        }
    }

    return count;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (i < n && (ch = getchar()) != '\n')
        str[i++] = ch;

    if (ch == '\n' && i < n - 1)
        str[i++] = ch;

    str[i] = '\0';
    return i;
}