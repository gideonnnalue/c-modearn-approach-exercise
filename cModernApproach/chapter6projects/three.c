#include <stdio.h>

int main(void)
{
    int top, bottom, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &top, &bottom);

    m = top;
    n = bottom;

    while (n > 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("\nIn lowest terms: %d/%d\n", top / m, bottom / m);

    return 0;
}
