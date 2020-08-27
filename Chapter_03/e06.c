/**
 * Exercise 06.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * The following warning is returned by compiler:
 * warning: integer overflow in expression [-Woverflow]
 * 
 * The program has the following output:
 * -294967296   4000000000
 * 
 * The left number is negative because it is overflowed.
 * 
 * The right is overflowed too, but  it  has not signal
 * because the format is unsigned. It happens because
 * was information lost (it had an correct information
 * representation even with overflow). 
 */

int main() {
    int big_big = 2000000000 + 2000000000;
    printf("\n\t%d   %u\n\n", big_big, big_big);

    return EXIT_SUCCESS;
}
