#include <stdio.h>

#define MAX_LEN 10

void selection_sort(int a[], int end);

int main(void)
{
    int a[MAX_LEN], i;

    printf("Enter %d integers: ", MAX_LEN);

    for (i = 0; i < MAX_LEN; i++)
        scanf("%d", &a[i]);

    selection_sort(a, i);

    for (i = 0; i < MAX_LEN; i++)
        printf("%4d", a[i]);

    printf("\n");

    return 0;
}

void selection_sort(int a[], int end)
{
    int i = 0, largest = 0, temp;

    if (end == 0)
        return;

    while (i <= end)
    {
        if (a[i] > a[largest])
        {
            largest = i;
        }
        i++;
    }
    temp = a[end];
    a[end] = a[largest];
    a[largest] = temp;

    selection_sort(a, --end);
}