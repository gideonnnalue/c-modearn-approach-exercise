#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Input number: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 2; i * i <= num; i += 2)
        printf("%d\n", i * i);

    return 0;
}
