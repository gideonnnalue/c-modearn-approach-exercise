#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, count;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if(count == 24) {
            count = 0;
            char a;
            printf("Press Enter to continue... ");
            a = getchar();
        }
        printf("%10d  %10d\n", i, i * i);
        count++;
    }

    return 0;
}
