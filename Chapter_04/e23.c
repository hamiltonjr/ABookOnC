/**
 * Exercise 23.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c; // coeficients

    // input
    printf("\n\tEnter coeficients a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // calculation
    printf("\n\tSolving the polynomial second degree equation\n"
        "\t(%lf)x² + (%lf)x + (%lf) = 0:\n\n", a, b, c
    );

    // discriminant
    double deltha = b*b - 4*a*c;

    if (deltha>0)
    {
        printf("\n\tThere are 2 real and different roots for the equation.\n");

        double deltha_root = sqrt(deltha);
        printf("\tdeltha root = %lf\n", deltha_root);

        double x1 = (-b + deltha_root) / (2*a);
        double x2 = (-b - deltha_root) / (2*a);

        // show in incresing order (because S is a set).
        if (x1 > x2)
        {
            printf("\tS = {%lf, %lf}\n\n", x2, x1);
        } else
        {
            printf("\tS = {%lf, %lf}\n\n", x1, x2);
        }

    } else if (deltha==0)
    {
        printf("\tThere are only one real root for the equation.\n");

        double deltha_root = sqrt(deltha);
        printf("\tdeltha root = %lf\n", deltha_root);

        double x = (-b + deltha_root) / (2*a);
        printf("\tS = {%lf}\n\n", x);
    } else if (deltha<0)
    {
        printf("\tThere are 2 complex and different roots for the equation.\n");

        double deltha_root = sqrt(-deltha);
        printf("\tdeltha root = %lfi\n", deltha_root);

        double re = -b / (2*a);
        double im = deltha_root / (2*a);
        printf("\tS = {(%lf) + (%lf)i, (%lf) - (%lf)i}\n\n", re, im, re, im);
    }

    // the end
    return EXIT_SUCCESS;
}

