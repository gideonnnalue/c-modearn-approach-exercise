#include <stdio.h>

// TODO: FIX PROGRAMM
int main(int argc, char const *argv[])
{
    int num = 0, test;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("\n");
    test = num;

    // printf("%d")

    do
    {
        printf("%d", test /= 10);
    } while (test > 0);
    

    printf("\n%d%d\n", num % 10, num / 10);

    return 0;
}
