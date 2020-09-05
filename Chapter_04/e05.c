/**
 * Exercise 05.
 */
#include <stdio.h>
#include <stdlib.h>
#define FWPERCENT 0.17 
#define SWPERCENT 0.03

/**
 * This code implements federal and state withholding tax
 * calculation and showing. Input is given by a file by
 * stdin stream.
 */

int main()
{
    double fwtax = 0.0;     // federal withholding tax
    double swtax = 0.0;     // state withholding tax
    double total = 0.0;     // total of salaries
    double salary;          // salary
    size_t counter = 0;     // inputs counter

    while (scanf("%lf", &salary) == 1)
    {
        // header
        printf("\n\tSalary #%zu\t%.2lf\n", ++counter, salary);
        printf("\t----------------------------------\n");

        // calculation
        fwtax = FWPERCENT * salary;
        swtax = SWPERCENT * salary;
        total += salary;

        // tax results
        printf("\tFederal withholding tax.: %.2lf\n", fwtax);
        printf("\tState withholding tax.: %.2lf\n", swtax);
    }

    // total salaries result
    printf("\n\t----------------------------------\n");
    printf("\tTotal of salaries: %.2lf\n\n", total);

    // the end
    return EXIT_SUCCESS;
}

