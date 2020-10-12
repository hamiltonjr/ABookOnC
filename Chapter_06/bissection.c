#include "bissection.h"

// implements bissection operation onto f function.
double bissection(double f(double x), double a, double b)
{
    double m = (a + b) / 2.0;

    // counter
    ++cnt;

    // stop: root found.
    if (f(m) == 0 || b - a < EPS)
    {
        return m;
    } else 
    {
        if (f(a) * f(m) < 0)
        {
            // different signals
            return bissection(f, a, m);
        } else
        {
            // equal signals
            return bissection(f, m, b);
        }
    }
}

