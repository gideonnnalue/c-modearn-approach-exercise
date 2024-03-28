#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small, *p = b;

    printf("Enter %d numbers: ", N);
    while (p < b + N)
        scanf("%d", p++);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int *i;

    *max = *min = *a;

    for (i = a + 1; i < a + n; i++)
    {
        if (*i > *max)
            *max = *i;
        else if (*i < *min)
            *min = *i;
    }
}