/**
 * Exercise 17.
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 3

/**
 * The strnge results is because overflow. All calculations works 
 * like an rithmetic modulus UINT_MAX + 1.
 */

int main()
{
    unsigned int u = UINT_MAX;

    printf("\n");
    printf("\t---------------------------------------\n");
    printf("\t         SUMMING TO UINT_MAX           \n");
    printf("\t---------------------------------------\n");
    for (unsigned int i = 0; i < MAX; ++i)
        printf("\t %u + %u = %u\n", u, i, u+i);

    printf("\t---------------------------------------\n");
    printf("\t        MULTIPLYING TO UINT_MAX        \n");
    printf("\t---------------------------------------\n");
    for (unsigned int i = 0; i < MAX; ++i)
        printf("\t %u * %u = %u\n", u, i, u*i);

    printf("\t---------------------------------------\n");
    printf("\t---------------------------------------\n");

    return EXIT_SUCCESS;
}
