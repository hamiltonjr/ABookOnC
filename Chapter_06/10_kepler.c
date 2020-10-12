#include "10_kepler.h"

double kepler(double x)
{
    return x - E * sin(x) - M;
}

