/**
 * Program: echo.c. p. 20..
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, c3;
    int i;
    float x;
    double y;

    // input
    printf("\n\tInput three characters, an int, a float and a double: " );
    scanf("%c%c%c%d%f%lf", &c1, &c2, &c3, &i, &x, &y);

    // output
    printf("\n\tHere is the data you typed in: %3c%3c%3c%5d%7e%7e\n\n", 
            c1, c2, c3, i, x, y);
    
    return EXIT_SUCCESS;
}

