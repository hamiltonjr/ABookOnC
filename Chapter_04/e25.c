/**
 * Exercise 25.
 */
#include <stdio.h>
#include <stdlib.h>
#define BOOLEX(x) ((x) ? 'T' : 'F')

/**
 * This code shows truth tables of some boolean functions. The 
 * true or false results can be represented by 0-1 (like in the)
 * code at page 170) or by T-F like suggested in this exercise.
 */

int main()
{
    int cnt;

    /*
     * Truth table for b1 || b2 || b3 || b4 
     */
    printf("\n\t%5s%5s%5s%5s%5s%30s\n",
        "cnt", "b1", "b2", "b3", "b4", 
        "b1 || b2 || b3 || b4"  
    );

    cnt = 0;
    for (int b1=0; b1<=1; ++b1)
        for (int b2=0; b2<=1; ++b2)
            for (int b3=0; b3<=1; ++b3)
                for (int b4=0; b4<=1; ++b4)
                        printf("\t%5d%5c%5c%5c%5c%15c\n",
                            ++cnt, BOOLEX(b1), BOOLEX(b2), BOOLEX(b3), BOOLEX(b4), 
                            BOOLEX(b1 || b2 || b3 || b4) 
                        );
    printf("\n\n");

    /*
     * Truth table for b1 && b2 && b3 && b4 
     */
    printf("\t%5s%5s%5s%5s%5s%30s\n",
        "cnt", "b1", "b2", "b3", "b4", 
        "b1 && b2 && b3 && b4"  
    );

    cnt = 0;
    for (int b1=0; b1<=1; ++b1)
        for (int b2=0; b2<=1; ++b2)
            for (int b3=0; b3<=1; ++b3)
                for (int b4=0; b4<=1; ++b4)
                        printf("\t%5d%5c%5c%5c%5c%15c\n",
                            ++cnt, BOOLEX(b1), BOOLEX(b2), BOOLEX(b3), BOOLEX(b4), 
                            BOOLEX(b1 && b2 && b3 && b4) 
                        );

    printf("\n\n");

    /*
     * Truth table for !(!b1 || b2) && (!b3 || b4)
     */
    printf("\t%5s%5s%5s%5s%5s%30s\n",
        "cnt", "b1", "b2", "b3", "b4", 
        "!(!b1 || b2) && (!b3 || b4)"  
    );

    cnt = 0;
    for (int b1=0; b1<=1; ++b1)
        for (int b2=0; b2<=1; ++b2)
            for (int b3=0; b3<=1; ++b3)
                for (int b4=0; b4<=1; ++b4)
                        printf("\t%5d%5c%5c%5c%5c%15c\n",
                            ++cnt, BOOLEX(b1), BOOLEX(b2), BOOLEX(b3), BOOLEX(b4), 
                            BOOLEX(!(!b1 || b2) && (!b3 || b4)) 
                        );

    printf("\n\n");

    return EXIT_SUCCESS;
}

