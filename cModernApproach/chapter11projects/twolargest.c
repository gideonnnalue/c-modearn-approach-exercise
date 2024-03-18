#include <stdio.h>

#define MAX 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int first, second, i;
    int a[MAX];

    printf("Enter numbers: ");

    for (i = 0; i < MAX; i++)
        scanf("%d", &a[i]);

    find_two_largest(a, MAX, &first, &second);

    printf("Largest: %d\n", first);
    printf("Smallest: %d\n", second);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = *second_largest = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}