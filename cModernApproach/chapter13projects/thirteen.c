#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define CHAR_LEN 80

void encrypt(char *message, int shift);

int main(void)
{
    char ch, message[CHAR_LEN] = {0};
    int shift = 0, i = 0, j = 0;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
    {
        message[i] = ch;
        i++;
    }

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift);

    encrypt(message, shift);

    return 0;
}

void encrypt(char *message, int shift)
{
    while (*message)
    {
        if (isupper(*message))
            *message = ((*message - 'A') + shift) % 26 + 'A';
        else if (islower(*message))
            *message = ((*message - 'a') + shift) % 26 + 'a';
        else
            *message = *message;

        putchar(*message++);
    }
    printf("\n");
}