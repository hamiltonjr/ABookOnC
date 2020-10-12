#include "10_kepler.h"
#include "bissection.h"

int cnt = 0;

int main()
{
    double root;

    // root are in the interval 
    assert(kepler(INF) * kepler(SUP) <= 0);

    // begin calculation (recursive)
    root = bissection(kepler, INF, SUP);

    // output
    printf("\n");
    printf("\tNumber of calls...: %d\n", cnt);
    printf("\tAprox, root.......: %.15f\n", root);
    printf("\tFunction value....: %.15f\n\n", kepler(root)); 

    return EXIT_SUCCESS;
}

