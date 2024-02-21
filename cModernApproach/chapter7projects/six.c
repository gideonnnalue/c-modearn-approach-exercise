#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of short: %ld\n", sizeof(short));
    printf("Size of long: %ld\n", sizeof(long));
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of long double: %ld\n", sizeof(long double));
    return 0;
}
