/**
 * Exercise 20.
 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str1[] = "abc\nabc\n";
    char str2[] = "abc\0abc\0";
    int cnt = 0;

    /**
     * With string abc\nabc\n the return is
     * abc
     * abc
     * 8
     * because are printed 8 characters, \n is counted;
     */
    cnt = printf("%s", str1);
    printf("%d\n\n", cnt);

    /**
     * With string abc\0abc\0 the return is
     * abc3
     * because only 3 characters are printed (the sentinel \0 
     * is not counted and 3 is printed close abc because there 
     * are not newline character inthat string).
     */
    cnt = printf("%s", str2);
    printf("%d\n\n", cnt);

    return EXIT_SUCCESS;
}

