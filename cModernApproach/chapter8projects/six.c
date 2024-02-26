#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char word[100], c;
    int i = 0;

    printf("Enter message: ");
    while ((c = getchar()) != '\n')
    {
        word[i] = c;
        i++;
    }

    printf("In BIFF-speak: ");
    for(int j = 0; j < i; j++)
    {
        switch (toupper(word[j]))
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(word[j]);
            break;
        }    
    }
    printf("!!!!!!!!!!\n");
    
    
    return 0;
}
