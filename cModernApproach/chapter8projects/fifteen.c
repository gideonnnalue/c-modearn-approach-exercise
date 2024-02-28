#include <stdio.h>
#include <ctype.h>

#define CHAR_LEN 80

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

    while (j < i)
    {
        if (isupper(message[j]))
            message[j] = ((message[j] - 'A') + shift) % 26 + 'A';
        else if (islower(message[j]))
            message[j] = ((message[j] - 'a') + shift) % 26 + 'a';
        else
            message[j] = message[j];

        putchar(message[j]);
        j++;
    }
    printf("\n");

    return 0;
}
