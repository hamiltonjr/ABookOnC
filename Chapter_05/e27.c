/**
 * Exercise 27.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long unsigned int moves = pow(2,54) / (3*3*3*3*3*5*5*5);

    printf( "For solving a Hanoi Tower with 64 disks, moving a disk per day\n"
            "it is needed 2^54 - 1 days = %llu years (+593 billions years).\n", 
            moves
    );
    printf("Acording scientits, Universe exists circa 13.5 billions years.\n\n");

    return EXIT_SUCCESS;
}

