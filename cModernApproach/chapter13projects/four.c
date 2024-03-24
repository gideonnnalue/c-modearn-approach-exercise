#include <stdio.h>

int main(int argc, char *argv[])
{
    argc--;

    while (argc >= 1)
        printf("%s ", argv[argc--]);

    printf("\n");
    return 0;
}