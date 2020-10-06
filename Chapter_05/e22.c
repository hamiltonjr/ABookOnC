/**
 * Exercise 22.
 */
#include <stdio.h>
#include <stdlib.h>
#define FOREVER 1
#define STOP 17

/**
 * The unique strange thing  is prototype in main(). But  it works well.
 * while (FOREVER) is like while (1) that runs forever in infinite loop.
 * If f() was use return the controls would returned  to  infinite loop.
 * But when static counter reaches STOP, f() uses exit to return control
 * to operating system. It makes program ends.
 */

int main()
{
    void f();

    // infinite loop
    while (FOREVER)
        f();

    return EXIT_SUCCESS;
}

void f()
{
    // static counter mantain value during program execution
    static int cnt = 0;

    printf("%d\n", ++cnt);

    // when counter reaches STOP value, control goes to
    // operating system and program ends.
    if (cnt == STOP)
        exit(EXIT_SUCCESS);
}

