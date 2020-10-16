#include <stdio.h>
#include <stdlib.h>

/*
 * The code was ran and generated tmp1 and tmp2. cat tmp1 and
 * cat tmp2 results in the same output. But diff tmp1 tmp2 says
 * that they are differents. Using hd:
 * $ hd tmp1
 * 00000000  61 62 63 0a                           |abc.|
 * 00000004
 * $ hd tmp2
 * 00000000  61 00 62 00 63 0a                     |a.b.c.|
 * 00000006
 * the differences are obvious.
 */

int main()
{

    // printf("abc\n");
    printf("a%cb%cc\n", '\0', '\0');
    return EXIT_SUCCESS;

}

