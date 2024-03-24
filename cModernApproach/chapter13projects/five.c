#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    argc--;

    while (argc >= 1)
        sum += atoi(argv[argc--]);

    printf("Total: %d\n", sum);
    return 0;
}