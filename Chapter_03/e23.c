/**
 * Exercise 23.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code do not compiles. The compiler shows error:
 * error: both ‘long’ and ‘float’ in declaration specifiers.
 * 
 * The message shows that the two specifiers are not accepted together.
 * Then, the type 'long float' do not exists for the compiler.
 */

int main()
{
    double z = 3.0;
    // long float z = 3.0;
    printf("%s%lf\n", z);

    return EXIT_SUCCESS;
}
