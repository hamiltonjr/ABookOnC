/**
 * Exercise 15.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * This code shows how scope can be modified using brackets and its
 * effects. It is no always obvious what happens with variables and
 * context modifying: this example teahes it.
 * 
 * The variable a is on main context. b and c are in both context 
 * with differente values (b has different type too).
 */

int main()
{
    // main function context
    int a = 1, b = 2, c = 3;

    a += b += ++c;
    printf("%5d%5d%5d\n", a, b, c);

    // internal block context
    {
        float b = 4.0;
        int c;

        a += c += 5*b;
        printf("%5d%5.1f%5d\n", a, b, c);
    }

    // main function context again
    printf("%5d%5d%5d\n", a, b, c);

    return EXIT_SUCCESS;
}

