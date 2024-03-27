#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char word[20] = {0}, symbol, c, words[30][20] = {0};
    int i = 0, j = 0;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        if (c == '.' || c == '?' || c == '!')
        {
            words[i][j++] = ' ';
            words[i][j] = '\0';
            symbol = c;
            break;
        }

        words[i][j++] = c;

        if (c == ' ')
        {
            if (i == 0)
                j--;
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    while (i >= 0)
    {
        printf("%s", words[i--]);
    }
    printf("%c\n", symbol);

    return 0;
}
