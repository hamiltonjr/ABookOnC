#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define INF -100.0
#define SUP +100.0
#define EPS 1.0e-15

// iteration counter
extern int cnt;

// prototypes
double bissection(double f(double x), double a, double b);
double f(double x);

