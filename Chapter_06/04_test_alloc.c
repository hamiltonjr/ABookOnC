#include "../includes/utils.h"

// prototypes
void fill_array(int*, int);
int sum_array(int*, int);

int main()
{
    int *a, n;
    
    // initalize random seed
    srand(time(NULL));

    printf("\n\tThis program does the follow requested:\n");
    printf("\t1. create space for an array of size n\n");
    printf("\t2. fill the array with randomly distributed digits\n");
    printf("\t3. print the array and the sum of its elements\n");
    printf("\t4. release the space\n");

    // program loop
    for ( ; ; )
    {
        // input
        printf("\n\tInput n: ");
        if (scanf("%d", &n) != 1 || n < 1)
        {
            break;
        }
        printf("\n");

        // allocate memory of array
        a = calloc(n, sizeof(int));

        // fill the array
        fill_array(a, n);

        // show array
        printf("\t");
        show_array(a, n);

        // show sum
        printf("\n\tSum = %d\n", sum_array(a, n));

        // free memory
        free(a);
    }

    return EXIT_SUCCESS;
}


// fill an integer array with randomly distributed
// digits.
void fill_array(int *a, int n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        a[i] = rand() % 19 - 9;
    }
}


// returns the sum of all elements of 
// an integer aarray.
int sum_array(int *a, int n)
{
    int sum = 0;
    for (unsigned int i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    return sum;
}

