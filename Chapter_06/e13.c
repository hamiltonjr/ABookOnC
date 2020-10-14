#include <stdio.h>
#include <stdlib.h>

// prototypes
void add(double *p, double *q, double *s, int n);
void show(double *p, int n);

int main()
{
    double p[] = { 1, 1, 1, 1, 1 };
    double q[] = { 2, -1, 2, 2, 0 };
    double s[4];
    int n = 4; // degree

    printf("\n\tp(x) = ");
    show(p, 4);

    printf("\n\tq(x) = ");
    show(q, 4);

    add(p, q, s, 4);

    printf("\n\ts(x) = ");
    show(s, 4);
    printf("\n\n");

    return EXIT_SUCCESS;
}


// add two polynomials of degree at most n.
// n is degree of the most degree polynomial.
void add(double *p, double *q, double *s, int n)
{
    for (unsigned int i = 0; i <= n; ++i)
    {
        s[i] = p[i] + q[i];
    }
}


// show polynomial.
void show(double *p, int n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        printf("(%.2lf)x^%u+", p[i], i);
    }
    printf("(%.2lf)x^%u", p[n], n);
}

