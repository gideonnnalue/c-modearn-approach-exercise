#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        printf("Digit:        ");
        for (int i = 0; i < 10; i++)
            printf("%3d", i);

        while (n > 0)
        {
            digit = n % 10;
            digit_count[digit]++;
            n /= 10;
        }

        printf("\nOccurrences:  ");
        for (int i = 0; i < 10; i++)
            printf("%3d", digit_count[i]);
        printf("\n");
        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}
