#include <stdio.h>

int main(void)
{
    long i, n;
    int count = 0;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
    {
        if (count == 24)
        {
            count = 0;
            char a;
            printf("Press Enter to continue... ");
            a = getchar();
        }
        printf("%10ld  %10ld\n", i, i * i);
        count++;
    }

    return 0;
}
