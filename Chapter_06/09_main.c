#include "bissection.h"

int cnt;

int main()
{
    double a = INF, b = SUP;
    double root;

    // stop if interval do not contains root.
    assert(f(a) * f(b)  <= 0);

    // begin (recursive) calculation
    root = bissection(f, a, b);

    // output
    printf("\n");
    printf("\tNumber of calls...: %d\n", cnt);
    printf("\tAprox, root.......: %.15f\n", root);
    printf("\tFunction value....: %.15f\n\n", f(root)); 

    return EXIT_SUCCESS;
}

