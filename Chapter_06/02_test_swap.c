#include "../includes/utils.h"

int main()
{
    int a = 3, b = 4;
    printf("\n\tThis program swaps integer values.\n");
    printf("\t----------------------------------\n\n");
    printf("\tBefore swapping: a = %d   b = %d\n", a, b);
    swap(&a, &b);
    printf("\tAfter swapping: a = %d   b = %d\n\n", a, b);
    printf("\t----------------------------------\n\n");

    return EXIT_SUCCESS;
}

