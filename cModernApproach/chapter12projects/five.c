#include <stdio.h>

int main(void)
{
    char word[100] = {0}, symbol, c, *p = word, *q;
    int i, j = 0;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        if (c == '.' || c == '?' || c == '!')
        {
            symbol = c;
            break;
        }

        *p++ = c;
    }

    while (p >= word)
    {
        while (*--p != ' ' && p != word)
            ;

        q = p == word ? word : p + 1;

        while (*q != '\0' && *q != ' ')
        {
            putchar(*q);
            q++;
        }

        if (p >= word)
            printf(" ");
    }

    printf("\b%c\n", symbol);

    return 0;
}
