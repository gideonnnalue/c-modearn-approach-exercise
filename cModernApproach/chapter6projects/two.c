#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n > 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("\nGreated common divisor: %d\n", m);
    

    return 0;
}
