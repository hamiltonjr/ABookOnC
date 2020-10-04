/**
 * Exercise 07.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65536
#define FLOATING_MODULUS 65536.0

/**
 * This code implements probabilities calculation on files.
 * The function probability() appears on page 222 Chapter 5
 * Functions.
 * 
 * In a file file_prob_100.dat is saved 100 probabilities
 * and the average of this results.
 * 
 * In a file file_prob_1000.dat is saved 1000 probabilities
 * and the average of this results.
 * 
 * By this results it looks that Large Numbers Law is not
 * observed.
 * Average: 0.467463
 * Average: 0.558617
 * e1 = | 0.467463 - 0.5 | = 0.12537
 * e2 = | 0.558617 - 0.5 | = 0.58617
 * e2 > e1 error is greater by 1000 samples.
 */
// probability seed
static unsigned seed = INITIAL_SEED;

// function probability
double probability()
{
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return (seed/FLOATING_MODULUS);
}

FILE *fprob100, *fprob1000;

int main()
{
    double sum = 0.0;

    // create file with 100 numbers    
    fprob100 = fopen("file_prob_100.dat", "w");
    for (size_t i = 0; i < 100; ++i)
    {
        double prob = probability();
        sum += prob;
        fprintf(fprob100, "%lf ", prob);
        if ((i+1)%5 == 0)
        {
            fprintf(fprob100, "\n");
        }
    }
    fprintf(fprob100, "Average: %lf\n", sum / 100);

    // create file with 1000 numbers
    fprob1000 = fopen("file_prob_1000.dat", "w");
    for (size_t i=0; i<1000; ++i)
    {
        double prob = probability();
        sum += prob;
        fprintf(fprob1000, "%lf ", prob);
        if ((i+1)%5 == 0)
        {
            fprintf(fprob1000, "\n");
        }
    }
    fprintf(fprob1000, "Average: %lf\n", sum / 1000);

    // the end
    fclose(fprob100);
    fclose(fprob1000);
    return EXIT_SUCCESS;
}

