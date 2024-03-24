/* Checks planet names */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void convert_to_upper(char *word);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    char first[10], second[10];

    int i, j;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            strcpy(first, argv[i]);
            strcpy(second, planets[j]);
            convert_to_upper(first);
            convert_to_upper(second);

            if (strcmp(first, second) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

void convert_to_upper(char *word)
{
    char *str = word;

    while (*str)
        *str++ = toupper(*str);
}