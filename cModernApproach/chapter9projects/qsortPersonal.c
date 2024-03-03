#include <stdio.h>

#define MAX_LEN 10

void quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main(void)
{
    int a[MAX_LEN], i;

    printf("Enter %d numbers to be sorted: ", MAX_LEN);

    for (i = 0; i < MAX_LEN; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, MAX_LEN - 1);

    printf("In sorted order: ");
    for (i = 0; i < MAX_LEN; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void quickSort(int a[], int low, int high)
{
    int middle;

    if (low > high)
        return;

    middle = partition(a, low, high);
    quickSort(a, low, middle - 1);
    quickSort(a, middle + 1, high);
}

int partition(int a[], int low, int high)
{
    int pivot = a[low], i = low, j = high, temp;

    while (i < j)
    {
        while (a[i] <= pivot)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    a[low] = a[j];
    a[j] = pivot;

    return j;
}