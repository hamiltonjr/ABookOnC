/**
 * Program: main.c (Tower of Hanoi). p. 
 */
#include "03_hanoi.h"

int cnt = 0;

int main()
{
    int n = get_n_from_user();
    assert(n>0);

    /**
     * Move n disks from tower Ato tower C
     * using tower B as a intermediate tower.
     */
    move(n, 'A', 'B', 'C');

    return EXIT_SUCCESS;
}

