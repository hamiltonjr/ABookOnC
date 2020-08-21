/**
 * Exercise 15.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, sum = 0.0, avg = 0.0, navg = 0.0;
    register size_t i = 0;

    // verify if has data in file
    if (scanf("%lf",&x) != 1)
    {
        printf("\tNo data found - bye!\n");
        exit(EXIT_FAILURE);
    }

    // header
    sum = avg = x;
    printf("\n");
    printf("\t---------------------------------------------------------\n");
    printf("\t   Count       Item           Average      Naive Average\n");
    printf("\t---------------------------------------------------------\n");
    printf("\t%5d%17e%17e%17e\n", i, x, avg, navg);

    //nes of table 
    for (i = 2; scanf("%lf", &x) == 1; ++i)
    {
        avg += (x - avg) / i;
        sum += x;
        navg = sum / i;

        // output
        printf("\t%5d%17e%17e%17e\n", i, x, avg, navg);
    }

    // footer
    printf("\t---------------------------------------------------------\n\n");
    printf("\n");

    return EXIT_SUCCESS;
}

