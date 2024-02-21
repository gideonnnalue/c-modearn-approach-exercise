#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0;

    printf("Enter x: ");
    scanf("%d", &x);

    int x_by_2 = x * x;
    int x_by_3 = x_by_2 * x;
    int x_by_4 = x_by_3 * x;
    int x_by_5 = x_by_4 * x;

    int result = (3 * x_by_5) + (2 * x_by_4) - (5 * x_by_3) - x_by_2 + (7 * x) - 6;

    printf("\nNo. 5 Result %d\n", result);

    int seq_1 = (3 * x) + 2;
    int seq_2 = (seq_1 * x) - 5;
    int seq_3 = (seq_2 * x) - 1;
    int seq_4 = (seq_3 * x) + 7;
    int result_2 = (seq_4 * x) - 6;

    printf("\nNo. 6 Result %d\n", result_2);

    return 0;
}
