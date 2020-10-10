#include "../includes/utils.h"

int main()
{
    int key[] = { 4, 3, 1, 67, 55, 8, 0, 4, -5, 37, 7, 4, 2, 9, 1, -1 };
    int sz = sizeof(key) / sizeof(int);

    printf("\n\tThis program tests MergeSort Algorithm...\n");
    printf("\tBefore: ");
    show_array(key, sz);

    /*
    bubble(key, sz);
    printf("\tAfter: ");
    show_array(key, sz);
    */

    mergesort(key, sz);
    printf("\tAfter: ");
    show_array(key, sz);

    return EXIT_SUCCESS;
}

