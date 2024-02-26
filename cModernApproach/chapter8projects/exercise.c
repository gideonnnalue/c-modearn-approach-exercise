#include <stdio.h>

#define FIB_LENGTH 40

int main(void)
{
    // EXERCISE 5
    int fib_numbers[FIB_LENGTH] = {0, 1};
    int i;

    for (i = 2; i < FIB_LENGTH; i++)
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];

    printf("[");
    for (i = 0; i < FIB_LENGTH; i++)
        printf(" %d", fib_numbers[i]);
    printf(" ]\n");

    // EXERCISE 6
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                                 {0, 1, 1},
                                 {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};


    return 0;
}
