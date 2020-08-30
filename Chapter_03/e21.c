#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Some tests with for-loops shows that the number is greater than and near 143.
 * 
 * The second part is an iterative input for user tests some values near 143.
 * Some inputs after the result with 5 decimals are 143.01608:
 * 
 * Type x (>143): 143.01608
 * pow(143.016080, 143.016080) = 17976080691041038397951339854771772877974933750
 * 73379406624114336104257520535614259782545396334160651563489245067534790216547
 * 61321362128393566609859813440075759670100019205072064017656548761470809637195
 * 01462562914136381166791026276644733942097174823966514887750932040451715293602
 * 0618226699302181862644027228160.000000
 * 
 * Type x (>143): 143.01609
 * pow(143.016090, 143.016090) = inf
 */

int main()
{
    double x = 100.0;

    for ( ; x<144; x+= 1.0)
        printf("pow(%f, %f) = %f\n", x, x, pow(x, x));

    printf("\n");

    do
    {
        printf("Type x (>143): ");
        scanf("%lf", &x);
        if (x != 0.0)
            printf("pow(%f, %f) = %f\n", x, x, pow(x, x));
    } while (x != 0.0);

    return EXIT_SUCCESS;
}
