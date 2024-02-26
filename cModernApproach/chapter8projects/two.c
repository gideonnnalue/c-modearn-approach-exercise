#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

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
    for(int i = 0; i < 10; i++)
        printf("%3d", digit_count[i]);
    printf("\n");
    
    return 0;
}
