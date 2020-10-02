/**
 * Program: get.c (Tower of Hanoi). p.
 */
#include "03_hanoi.h"

int get_n_from_user()
{
    int n;

    printf("%s",
        "---\n"
        "TOWER OF HANOI:\n"
        "\n"
        "The disks from tower A must be moved to tower C. Only one\n "
        "disk can be moved at a time, and the order to each tower\n"
        "must be preserved at each step. Any of the towers A, B,\n"
        " C can be used for intermediate placementof a disk.\n"
        "\n"
        "The problem starts with n diskson tower A.\n"
        "\n"
        "Input n: "
    );

    if (scanf("%d", &n) != 1 || n<1)
    {
        printf("ERROR: a positive integer must be typed - bye.\n\n");
        exit(EXIT_FAILURE);
    }

    printf("\n");
    return n;
}
