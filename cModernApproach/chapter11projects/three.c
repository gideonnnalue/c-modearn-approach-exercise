#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int top, bottom, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &top, &bottom);

    reduce(top, bottom, &m, &n);

    printf("\nIn lowest terms: %d/%d\n", top / m, bottom / m);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    while (*reduced_denominator > 0)
    {
        int remainder = *reduced_numerator % *reduced_denominator;
        *reduced_numerator = *reduced_denominator;
        *reduced_denominator = remainder;
    }
}