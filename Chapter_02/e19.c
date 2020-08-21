/**
 * exercise 19.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NCOL 5

int main()
{
    // randomize
    srand(time(NULL));

    // input
    size_t n = 0;

    printf("\n\t%s\n\t%s",
        "Some randomly distributed integers areprinted.",
        "How many do you want to see? "
    );
    scanf("%u",&n);

    // show random numbers
    int i = -1;
    printf("\t");
    while (++i < n)
    {
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

