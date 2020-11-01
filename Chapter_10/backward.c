#include <stdio.h>
#include <stdlib.h>
#define MAXSTRING 100


int main()
{

    char fname[MAXSTRING];
    FILE *ifp;
    int c;

    /* input */
    fprintf(stderr, "\n\tInput a filename: ");
    scanf("%s", fname);

    /* open binary file */
    ifp = fopen(fname, "rb");
    
    /* begin file reading from the end */
    fseek(ifp, 0, SEEK_END);
    fseek(ifp, -1, SEEK_CUR);

    /* output */
    printf("\t-----------------------------------\t");
    while (ftell(ifp) > 0)
    {
        c = getc(ifp);
        putchar(c);
        if (c == '\n')
        {
            putchar('\t');
        }
        fseek(ifp, -2, SEEK_CUR);
    }

    /*
     * show 1st character as last
     * error in book text - the
     * code do not show the lsat 
     * character
     * I don't know if this error
     * was reported.
     */
    putchar(getc(ifp));
    printf("\n\t-----------------------------------\n\n");

    /* the end */
    fclose(ifp);
    return (EXIT_SUCCESS);

}

