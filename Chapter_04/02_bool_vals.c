/**
 * Program: bool_vals.c. p. 170. 
 */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 57

void showLine();

int main()
{
    unsigned int cnt = 0;

    // header
    showLine();
    printf("\t%5s%5s%5s%5s%5s%5s%7s%7s%11s\n",
        "cnt", "b1", "b2", "b3", "b4", "b5",
        "fct1", "fct2", "majority"  
    );
    showLine();

    // results (table)
    for (int b1=0; b1<=1; ++b1)
        for (int b2=0; b2<=1; ++b2)
            for (int b3=0; b3<=1; ++b3)
                for (int b4=0; b4<=1; ++b4)
                    for (int b5=0; b5<=1; ++b5)
                        printf("\t%5u%5d%5d%5d%5d%5d%6d%7d%9d\n",
                            ++cnt, b1, b2, b3, b4, b5, 
                            b1 || b3 || b5, b1 && b2 || b4 && b5,
                            b1 + b2 + b3 + b4 + b5 >= 3 
                        );

    showLine();
    return EXIT_SUCCESS;
}

/**
 * This functions shows a line of length LENGTH.
 */
void showLine()
{
    printf("\t");
    for (unsigned int i = 0; i < LENGTH; ++i)
    {
        printf("-");
    }
    printf("\n");
}

