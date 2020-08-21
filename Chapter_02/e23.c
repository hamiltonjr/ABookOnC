/**
 * Exercise 23.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NCALLS  100000000
#define NCOLS   8
#define NLINES  3

/**
 * This code calculate a lot of random numbers and difference of time elapsed for calls
 * of calculations.
 * 
 * OBS: It was necessary to increase random number lenght from 7 to 10 nd numberof calls
 * from 10000000 (10 millions) to 100000000 (100 millions) to get 1 second elapsed time.
 * Cause it would interesting toincrease numbers of calls,  a suggestion is put it circa
 * 1000000000 (1 bliion) for get more than  10  seconds of elapsed time. Such impressive
 * differences occurred because the exercise  was planned for  a  16-bits processors (in
 * the time of book was published) and today my notebook  are  a  64-bits machine with a
 * clock of 3.7GHz.    
 */
int main() {
    int val;
    long begin, diff, end;

    /*** randomize clock ***/
    srand(time(NULL));

    /*** initialize clock ***/
    begin = time(NULL);

    printf("\n\tTIMING TEST: %d calls  to rand()\n\n\t", NCALLS);
    for (register size_t i = 1; i <= NCALLS; ++i)
    {
        val = rand();
        if (i <= NCOLS * NLINES)
        {
            printf("%10d ", val);
            if (i % NCOLS == 0)
            {
                putchar('\n');
                putchar('\t');
            }
        } else if (i == NCOLS * NLINES + 1)
        {
            printf("\t%7s\n\n", ".....");
        }
    }

    /*** finalize clock ***/
    end = time(NULL);

    /*** calculate time difference ***/
    diff = end - begin;

    /*** show results ***/
    printf("\n\t%s%ld\n\t%s%ld\n\t%s%ld\n\t%s%.10f\n\n", 
        "          end time: ", end,
        "        begin time: ", begin,
        "      elapsed time: ", diff,
        "time for each call: ", (double) diff / NCALLS);

    return EXIT_SUCCESS;
}

