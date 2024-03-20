/*
 * Exercises: 7, 8, 9, 12, 17
 */
#include <stdio.h>
#include <stdbool.h>

#define N 10
#define LEN 10

bool search(const int a[], int n, int key);
void store_zeros(int a[], int n);
double inner_product(const double *a, const double *b, int n);
int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;

    printf("%s", search(a, N, 11) ? "Found it" : "Not Found it");
    store_zeros(a, N);

    for (p = a; p < a + N; p++)
        printf(" %d", *p);

    printf("\n");
    return 0;
}

/* Exercise 7 */
bool search(const int a[], int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    return false;
}

/* Exercise 8 */
void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}

/* Exercise 9 */
double inner_product(const double *a, const double *b, int n)
{
    int total = 0;
    const int *p, *p2;

    for (p = a, p2 = b; p < a + n; p++, p2++)
        total += *p * *p2;

    return total;
}

/* Exercise 12 */
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *second_largest = 0;
    int i = 0;
    const int *p;

    for (p = a; a < a + n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
            *second_largest = *p;
    }
}

/* Exercise 17 */
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    const int *p;
    int sum = 0;

    for (p = &a[0][0]; p < a + n * LEN; p++)
        sum += *p;

    return sum;
}