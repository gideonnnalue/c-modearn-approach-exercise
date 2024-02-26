#include <stdio.h>

#define N_SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(int argc, char const *argv[])
{
    int a[10], i;

    printf("Enter %d numbers: ", N_SIZE);
    for (i = 0; i < N_SIZE; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = N_SIZE - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
    
    return 0;
}
