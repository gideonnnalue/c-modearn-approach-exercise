#include <stdio.h>

#define N 10

int sum_array(const int a[], int n);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("sum: %d", sum_array(a, N));

    printf("\n");
    return 0;
}

int sum_array(const int a[], int n)
{
    const int *p;
    int sum;

    sum = 0;
    for (p = a; p < a + n; p++)
        sum += *p;
    // for (i = 0; i < n; i++)
    //     sum += a[i];
    return sum;
}