#include "08_sum_sqr.h"
#include <math.h>

int main()
{
    printf("\n\tFisrt computation....: %lf\n", sum_square(f, 1, 10000));
    printf("\tSecond computauion...: %lf\n\n", sum_square(sin, 2, 13));

    return EXIT_SUCCESS;
}

