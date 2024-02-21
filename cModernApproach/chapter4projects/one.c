#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("\n%d%d\n", num % 10, num / 10);

    return 0;
}
