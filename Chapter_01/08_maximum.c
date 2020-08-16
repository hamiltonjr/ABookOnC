/**
 * Program: maximum.c. p. 30.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This program takes the number of real values and allows input
 * of this real value. The output is the maximum and the minimum
 * of all values entered.
 */

// prototypes
float maximum(float x, float y);
float minimum(float x, float y);
void prn_info();

int main()
{
    // print info
    prn_info();

    // number of values processed
    int n;
    printf("\n\tInput n: ");
    scanf("%d", &n);

    // input of real values to be processed
    float x;
    printf("\n\tInput %d real numbers:", n);
    scanf("%f", &x);

    float max = x;
    float min = x;
    for (unsigned int i = 2; i <= n; ++i)
    {
        scanf("%f", &x);
        max = maximum(max, x);
        min = minimum(min, x);
    }

    // output the results
    printf("\n\t%s%11.3f\n\t%s%11.3f\n\n", 
        "Maximum: ", max,
        "Minimum: ", min
    );

    // the end
    return EXIT_SUCCESS;
}

/**
 * This function takes parameters x and y and returns 
 * the maximum among this values.
 */
float maximum(float x, float y)
{
    if (x > y)
    {
        return x;
    } else
    {
        return y;
    }
}

/**
 * This function takes parameters x and y and returns 
 * the minimum among this values.
 */
float minimum(float x, float y)
{
    if (x < y)
    {
        return x;
    } else
    {
        return y;
    }
}

/**
 * This functions prints initial information about the
 * utility of this program.
 */
void prn_info()
{
    printf("\n\t%s\n\t%s\n\n", 
        "This program reads an integer value for n, and then",
        "processes n real numbers to find max and min values."
    );
}

