/**
 * Exercise 23.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code implements hailstones.
 */

// prototype
void hailstones(int);

// test
int main()
{
    int n;

    // input
    printf("\n\tThis program test the Collatz Conjecture...\n");
    printf("\tn: ");
    scanf("%d", &n);

    // output
    hailstones(n);

    // the end
    return EXIT_SUCCESS;
}

/**
 * This function implements hailstones.
 * 
 * parameter: integer number n.
 * return: nothing (only output on screen).
 */
void hailstones(int n)
{
    int counter = 0;

    printf("\n\t");
    while (n > 1)
    {
        ++counter;
        printf("%d\t", n);

        // dispose like table with 6 columns
        if (counter % 6 == 0)
        {
            printf("\n\t");
        }

        // apply hailstone rule
        if (n%2==0)
        {
            n /= 2;
        } else
        {
            n = 3*n + 1;
        }
    }

    printf("1\n\n");
}

