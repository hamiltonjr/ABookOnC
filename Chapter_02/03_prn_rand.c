/**
 * Program: prn_rnnd.c. p. 93.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NCOL 7

int main()
{
    // input
    ster size_t n = 0;

    printf("\n\t%s\n\t%s",
        "Some randomly distributed integers areprinted.",
        "How many do you want to see? "
    );
    scanf("%u",&n);

    // show random numbers 
    for (register size_t i = 0; i < n; ++i)
    {
        // dvide into columns
        if (!(i % NCOL))
        {
            putchar('\n');
            putchar('\t');
        }
        printf("%12d", rand());
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}

