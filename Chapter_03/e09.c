/**
 * Exercise 09.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define STEP 0.05

/**
 * It  is  flat near origin  in  all given points of interval
 * [-0.25, +0.25], but is particulary near 0 at  the interval
 * [-0.01, +0.01].
 * 
 * Without + in format the numerical representation of points
 * in the positive middle of interval is printed withou signal
 * and stays not lined up. In the right side  all  values are
 * positive and it has no line up problem. 
 */

// prototype
double f(double);

int main()
{
    // header
    printf("\n");
    printf("\t-------------------------------------------\n");
    printf("\t  BEHAVIOR OF SIN(COS(X)) AND COS(SIN(X))  \n");
    printf("\t  NEAR THE ORIGIN                          \n");
    printf("\t            x           f(x)               \n");
    printf("\t-------------------------------------------\n");
    printf("\n");

    // lines of table
    for (double x=-0.25; x<=+0.25; x += STEP)
    {
        // with + signal.
        printf("\t\t%+.2f\t%+.15f\n", x, f(x));

        // without + signal.
        //printf("\t\t%+.2f\t%.15f\n", x, f(x));
    }

    // footer
    printf("\n");
    printf("\t------------------------------------------\n");
    printf("\t CONCLUSION: it is really flat between    \n");
    printf("\t -0.25 and +0.25,                         \n");
    printf("\t------------------------------------------\n");
    printf("\n");

    return EXIT_SUCCESS;
}

/**
 * This function implements the math function difference of
 * sin(cos(x)) - cos(sin(x)). It is used here to study the
 * behavior of Taylor series of sin(cos(x)) and cos(sin(x))
 * near origin.
 */
double f(double x)
{
    return tan(sin(x)) - sin(tan(x));
}

