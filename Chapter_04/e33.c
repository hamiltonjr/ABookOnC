/**
 * Exercise 33.
 */
#include <stdio.h>
#include <stdlib.h>

// prorotypes
int min(int x, int y, int z);
int max(int x, int y, int z);

int main()
{
    int x = 33, y = 21, z = 10;
    printf("\n\tmin = %d\n", min(x, y, z));
    printf("\tmax = %d\n\n", max(x, y, z));

    return EXIT_SUCCESS;
}

/**
 * This function returns the maximum among 3 numbers.
 */
int min(int x, int y, int z)
{
    return (((x < y) ? x : y) < z) ? ((x < y) ? x : y) : z;
}

/**
 * This function returns the minimum among 3 numbers.
 */
int max(int x, int y, int z)
{
    return (((x > y) ? x : y) > z) ? ((x > y) ? x : y) : z;
}

