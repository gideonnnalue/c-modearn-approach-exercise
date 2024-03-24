#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char str[], int n);
void reverse_name(char *name);

// TODO: Change function

int main(void)
{
    char name[100], *p;
    int str_len;

    printf("Enter a first and last name: ");

    str_len = read_line(name, 100);

    for (p = name + str_len; *p != ' '; p--)
        ;

    printf("%s, %c.\n", --p, *name);

    return 0;
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

void reverse_name(char *name)
{
    char *p = name;

    for (p = name + strlen(name); *p != ' '; p--)
        ;

    printf("%s, %c.\n", --p, *name);
}