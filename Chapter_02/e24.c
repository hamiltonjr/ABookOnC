/**
 * Exercise 24.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define NLINES 10
#define MAX 500


/**
 * This code utility is analize behavior of calculation of random numbers in range 
 * [0, RAND_MAX] near its median RAND_MAX / 2.0. Each counting of MAX calculations
 * is alineof table and contings abovend below re presented, with difference and a
 * percent-difference too.
 * 
 * Conclusion: it was observed a small deviation. It is not a good randomization 
 * for serious purposes.
 */


// given median
double median = RAND_MAX /2.0;

int main() 
{

    // it counts how many times number of above if greater than below.
    unsigned int counter = 0;


    // randomize beginning
    srand(time(NULL));


    // header
    printf("\t--------------------------------------\n");
    printf("\t   n   below   above   diff   percent\n");
    printf("\t--------------------------------------\n");


    // NLINES lines of table
    for (int j = 0; j < NLINES; ++j)
    {
        register size_t below_cnt = 0;
        register size_t above_cnt = 0;
        int difference = 0;


        // MAX iterations
        for (register size_t i = 0; i < MAX; ++i)
        {
            (rand() < median) ? below_cnt++ : above_cnt++;
        }
        

        // calculations
        difference = above_cnt - below_cnt;
        if (difference > 0)
        {
            counter++;
        }


        // output
        printf("\t%4d%8d%8d%6d\t%2.2f\n", 
                j+1, below_cnt, above_cnt, difference, 
                (difference * 100.0) / MAX);
    }


    // footer
    printf("\t--------------------------------------\n");
    printf("\t\tAbove occured %u times.\n", counter);
    printf("\t\tBelow occured %u times.\n", NLINES - counter);
    printf("\t--------------------------------------\n");

    return EXIT_SUCCESS;

}

