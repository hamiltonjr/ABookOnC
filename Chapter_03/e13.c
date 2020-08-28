/**
 * Exercise 13.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code shows memory required to store each primitive type
 * for complete a table in this exercise. 
 */

int main()
{
    // header
    printf("\n");
    printf("\t-------------------\n");
    printf("\t FUNDAMENTAL TYPES \n");
    printf("\t-------------------\n");
    printf("\t char........: %2u\n", sizeof(char));
    printf("\t short.......: %2u\n", sizeof(short));
    printf("\t int.........: %2u\n", sizeof(int));
    printf("\t unsigned....: %2u\n", sizeof(unsigned));
    printf("\t long........: %2u\n", sizeof(long));
    printf("\t float.......: %2u\n", sizeof(float));
    printf("\t double......: %2u\n", sizeof(double));
    printf("\t long double.: %2u\n", sizeof(long double));

    // folter
    printf("\t-------------------\n");
    printf("\t-------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}

