#include <stdio.h>
#include <stdlib.h>

// prototypes
double eval(double *p, double x, int n);
double heval(double *p, double x, int n);
void show(double *p, int n);

int main()
{
    double p[] = { 3, 2, 4, 7, 5 };
    int n = 4; // p has degree 4

    printf("\n\tThe polynomial is\n\t");
    show(p, 4);

    double x = 1.0;
    printf("\n\tIf x = %lf, p(x) = %lf (no Homer)\n", x, eval(p, x, 4));
    printf("\tIf x = %lf, p(x) = %lf (Homer)\n\n", x, heval(p, x, 4));

    return EXIT_SUCCESS;
}


// evaluate a polynomial in x.
double eval(double *p, double x, int n)
{
    double sum = 0.0;
    double prod = 1.0;

    for (unsigned int i = 0; i <= n; ++i)
    {
        sum += p[i] * prod;
        prod *= x;
    }

    return sum;
}


// evaluate a polynomial in x.
double heval(double *p, double x, int n)
{
    double sum = p[n];
    double prod = 1.0;

    for (unsigned int i = n; i > 0; --i)
    {
        prod = sum * x;
        sum = prod + p[i-1];
    }

    return sum;
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

