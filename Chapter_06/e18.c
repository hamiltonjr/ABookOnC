#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    char a[] = "abcdefghijklmnopqrstuvwxyz";
    char *p = a;
    char *q = a + strlen(a) - 3;

    printf("a = %s\n", a);
    strcpy(p, q);
    printf("a = %s\n", a);


    return EXIT_SUCCESS;

}

