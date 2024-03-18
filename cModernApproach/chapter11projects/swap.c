#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 5, j = 12;

    printf("i: %d, j: %d\n", i, j);

    swap(&i, &j);

    printf("i: %d, j: %d\n", i, j);
}

void swap(int *p, int *q)
{
    int temp = *p;

    *p = *q;
    *q = temp;
}