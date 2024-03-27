#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char str[], int n);
void reverse_name(char *name);

int main(void)
{
    char name[100];

    printf("Enter a first and last name: ");

    read_line(name, 100);

    reverse_name(name);

    printf("%s\n", name);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (i < n && (ch = getchar()) != '\n')
        str[i++] = ch;

    str[i] = '\0';
    return i;
}

void reverse_name(char *name)
{
    char *p = name, initials[2];

    for (p = name; *p != ' '; p++)
        ;

    p++;

    initials[0] = name[0];
    initials[1] = '\0';

    strcpy(name, strcat(p, ", "));
    strcat(name, strcat(initials, "."));
}