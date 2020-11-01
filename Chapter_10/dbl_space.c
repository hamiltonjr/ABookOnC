#include <stdio.h>
#include <stdlib.h>

/*
 * prototypes 
 */
void double_space(FILE*, FILE*);
void prn_info(char*);


int main(int argc, char** argv)
{

    FILE *ifp, *ofp;


    /* overture */
    printf("\n\t---------------------------------------------\n");
    printf("\tThis program double-space a text (double all  \n");
    printf("\tnewline in the text file.                     \n");
    printf("\t---------------------------------------------\n");


    /* verify if program has been used properly */
    if (argc != 3)
    {
        prn_info(argv[0]);
        exit(EXIT_FAILURE);
    }

    
    /* open both files */
    printf("\tOpen %s for reading data...\n", argv[1]);
    ifp = fopen(argv[1], "r");
    printf("\tOpen %s for saving data.....\n", argv[2]);
    ofp = fopen(argv[2], "w");


    /* read, double space and save */
    printf("\tDouble-spacing text...\n");
    double_space(ifp, ofp);


    /* the end */
    printf("\tClosing and ending...");
    fclose(ifp);
    fclose(ofp);
    printf("done\n");
    printf("\tVerify the result accessing %s file!\n", argv[2]);
    printf("\t---------------------------------------------\n\n");
    return (EXIT_SUCCESS);

}


void double_space(FILE *ifp, FILE *ofp)
{

    int c;

    while((c = getc(ifp)) != EOF)
    {
        putc(c, ofp);
        if (c == '\n')
        {
            putc('\n', ofp);
        }
    }

}


void prn_info(char* s)
{

    printf("\tUsage %s infile outfile\n", s);
    printf("\tThe contents fo infile is double-spaced\n");
    printf("\tand written in outfile.\n\n");

}

