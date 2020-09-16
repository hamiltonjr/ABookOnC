/**
 * Program: 
 */
#include <stdio.h>
#include <stdlib.h>
#define N 7

// prototypes
void prn_heading();
void prn_footer();
void prn_tbl_of_powers(int);
long power(int, int);

int main()
{
    prn_heading();
    prn_tbl_of_powers(N);
    prn_footer();
    return EXIT_SUCCESS;
}

void prn_heading()
{
    printf("\n\t:::::::::::::: A TABLE OF POWERS ::::::::::::::\n\n");
}

void prn_footer()
{
    printf("\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n\n");
}

void prn_tbl_of_powers(int n)
{
    for (unsigned int i = 1; i < n; ++i)
    {
        printf("\t%ld", power(i, 1));

        for (unsigned int j = 2; j < n; ++j)
        {
            printf("%9ld", power(i, j));
        }
        putchar('\n');
    }
}

long power(int m, int n)
{
    long product = 1.0;

    for (unsigned int i = 1; i <= n; ++i)
    {
        product *= m;
    }

    return product;
}

