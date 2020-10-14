#include <stdio.h>
#include <stdlib.h>

// prototypes
void add(double *p, double *q, double *s, int n);
void mult(double *p, double *q, double *r, int n);
void show(double *p, int n);
void intermediate(double *p, double c, int pos, double *r, int n);
int degree(int n);

int main()
{
    double p[10] = { 1.0, 2.0, 0.0, 0.0, 0.0 }; // degree 4
    double q[10] = { 0.0, 1.0, 3.0, 0.0, 0.0 }; // degree 4
    double r[10] = { 0.0, 0.0, 0.0, 0.0, 0.0 }; // degree 4
    const int n = 5; // degree 4

    printf("\n\tp(x) = ");
    show(p, n);

    printf("\n\tq(x) = ");
    show(q, n);

    printf("\n\tp(x) * q(x) = ");
    mult(p, q, r, n);
    show(r, n);
    printf("\n\n");

    return EXIT_SUCCESS;
}


void intermediate(double *p, double c, int pos, double *r, int n)
{
    for (unsigned int i = 0; i <= pos; ++i)
    {
        r[i] = 0.0;
    }

    for (unsigned int i = pos; i < degree(n) + pos; ++i)
    {
        r[i+1] = p[i] * c;
    }
}

// add two polynomials of degree at most n.
// n is degree of the most degree polynomial.
void add(double *p, double *q, double *s, int n)
{
    for (unsigned int i = 0; i < degree(n); ++i)
    {
        s[i] = p[i] + q[i];
    }
}

void mult(double *p, double *q, double *r, int n)
{
    for (unsigned int i = 0; i < degree(n); ++i)
    {
        for (unsigned int j = 0; j < degree(n); ++j)
        {
            r[i+j] += p[i] * q[j];
        }
    }
}

// show polynomial.
void show(double *p, int n)
{
    for (unsigned int i = 0; i < degree(n); ++i)
    {
        printf("(%.2lf)x^%u+", p[i], i);
    }
    printf("(%.2lf)x^%u", p[degree(n)], degree(n));
}


int degree(int n)
{
    return n - 1;
}

