/**
 * exercise 20.
 *
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code compliles with or without extern specifier. With
 * extern the values assigned to variales externally are shown.
 * Without extern the program shows garbage.
 * 
 * Including static at the extern variables, the code do not
 * compiles. The variables are static (not in context of none
 * function, but redeclared in main() - it confuses cimpiler).
 */

int main()
{
    // uncomment extern for testing
    extern
    int a, b, c;

    printf("%3d%3d%3d\n", a, b, c);
    
    return EXIT_SUCCESS;
}

// uncomment static for testing
static 
int a = 1, b = 2, c = 3;

