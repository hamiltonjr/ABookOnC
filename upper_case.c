#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{

    FILE *ifp;
    int c;


    ifp = popen("ls", "r");
    while ((c = getc(ifp)) != EOF)
    {
        putchar(toupper(c));
    }

    pclose(ifp);
    return (EXIT_SUCCESS);
}

