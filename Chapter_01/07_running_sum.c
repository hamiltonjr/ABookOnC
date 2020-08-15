/**
 * Program: running_sum.c. p. 26.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, min, max, sum, avg;
    unsigned int i = 0;

    // verify if has data in file
    if (scanf("%lf",&x) != 1)
    {
        printf("\tNo data found - bye!\n");
        exit(EXIT_FAILURE);
    }

    // table header
    min = max = sum = avg = x;
    printf("\t%5s%9s%9s%9s%12s%12s\n\t%5s%9s%9s%9s%12s%12s\n",
        "Count", "Item", "Min", "Max", "Sum", "Average", 
        "-----", "----", "---", "---", "---", "-------");
    printf("\t%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n", 
        i, x, min, max, sum, avg);

    // iterative output
    for (i = 2; scanf("%lf", &x) == 1; ++i)
    {
        // decision
        if (x < min)
        {
            min = x;
        } else if (x > max)
        {
            max = x;
        }

        sum += x;
        avg = sum/i;

        // output
        printf("\t%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n", 
            i, x, min, max, sum, avg);
    }

    // footer
    printf("\t---------------------------------------------------------\n\n");

    return EXIT_SUCCESS;
}

