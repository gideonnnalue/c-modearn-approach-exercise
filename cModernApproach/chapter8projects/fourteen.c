#include <stdio.h>

int main(void)
{
    char word[100] = {0}, symbol, c;
    int i, j = 0;

    printf("Enter a sentence: ");

    for (i = 0; (c = getchar()) != '\n'; i++)
    {
        if(c == '.' || c == '?' || c == '!')
        {
            symbol = c;
            break;
        }
        word[i] = c;

    }
    

    while(i >= 0)
    {
        while (word[--i] != ' ' && i != 0)
            ;

        j = i == 0 ? 0 : i + 1;

        while (word[j] != '\0' && word[j] != ' ')
        {
            putchar(word[j]);
            j++;
        }

        if(i >= 0)
            printf(" ");
    }

    printf("\b%c\n", symbol);
    
    return 0;
}
