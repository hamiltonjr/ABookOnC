/**
 * Exercise 08.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * For eps = 1.0e-6, 1.0 < 1,0 + eps is true. For eps = 1.0e-7, it
 * is not. For validate it, it  is  necessary to show more digits. 
 */

int main()
{
    double eps = 1.0e-1;

    // header
    printf("\n");
    printf("\t-----------------------------------------------\n");
    printf("\t   TESTING EPSILON REPRESENTATION ON MACHINE   \n");
    printf("\t-----------------------------------------------\n");

    // lines of table
    for (unsigned int i = 0; i < 10; ++i)
    {   
        printf("\t %.8f < %.8f + %8e? %s\n", 0.1, 0.1, eps, 
            (0.1 < 0.1 + eps) ? "true" : "false");
        eps /= 10;
    }

    // footer
    printf("\t-----------------------------------------------\n");
    printf("\t CONCLUSION: the epsilon representation works  \n");
    printf("\t on this machine very well.                    \n");
    printf("\t-----------------------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}

