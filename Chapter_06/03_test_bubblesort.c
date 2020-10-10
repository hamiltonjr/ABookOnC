#include "../includes/utils.h"

int main()
{
    int a[] = {12, 3, 29, 1, 91, 35, 14, -3};
    
    printf("\n\tThis program shows Bubble Sort in action!\n");
    printf("\t-----------------------------------------\n\n");
    printf("\tBefore: ");
    show_array(a, 8);
    bubble(a, 8);
    printf("\tAfter: ");
    show_array(a, 8);
    printf("\t-----------------------------------------\n\n");

    return EXIT_SUCCESS;
}

