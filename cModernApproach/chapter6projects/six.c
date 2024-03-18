#include <stdio.h>

int main(void)
{
    int num;

    printf("Input number: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 2; i * i <= num; i += 2)
        printf("%d\n", i * i);

    return 0;
}
