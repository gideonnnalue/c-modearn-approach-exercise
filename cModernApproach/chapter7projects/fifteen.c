#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int result = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        result *= i;
    }

    printf("Factorial of %d: %d\n", num, result);
    
    return 0;
}

