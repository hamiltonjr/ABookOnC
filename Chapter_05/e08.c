/**
 * Exercise 08.
 */
#include <stdio.h>
#include <stdlib.h>
#define BEGIN 0.0
#define END 3.0
#define STEP 0.1

/**
 * The code implements plotting of points of a polynomial
 * function. It saves the points in a file. It is possible
 * know how points are roots of the associated equation by
 * the signal changing of f(x) in [0, 3].
 *
 *    x = 1.0           x = 2.0
 * (0.9, 0.1100)     (1.9, -0.0900)
 * (1.0, 0.0000)     (2.0, 0.0000)
 * (1.1, -0.0900)    (2.1, 0.1100)
 * 
 * Observing this points it is possible to know that x = 1.0 
 * and x = 2.0 are roots of associated equation.
 */

// prototype
double p(double a, double b, double c, double x);

FILE *fpin;

// test
int main()
{
    double x = BEGIN;

    // try to open file
    if ((fpin = fopen("points.dat", "w")) == NULL)
    {
        printf("ERROR: Impossible to open file\n");
        exit(EXIT_FAILURE);
    }

    // fill file with data.
    while (x < END)
    {
        fprintf(fpin, "(%.1lf, %.4lf)\n", x, p(1, -3, 2, x));
        x += STEP;        
    }

    // the end
    fclose(fpin);
    return EXIT_SUCCESS;
}

/**
 * This function returns the value of f(x) at given points,
 */
double p(double a, double b, double c, double x)
{
    return (a*x + b)*x + c;
}

