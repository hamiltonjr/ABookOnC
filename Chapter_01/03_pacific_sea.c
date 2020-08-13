/**
 * Program: pacific_sea.c. p. 15.
 */

// Measuring the Pacific Sea
#include "03_pacific_sea.h"
#include <stdlib.h>

int main() 
{
    const int pacific_sea = AREA;

    printf("\n\tThe Pacific Sea covers an area");
    printf("\t of %d squares kilometers.\n", pacific_sea);
    
    double sq_miles = SQ_MILES_PER_SQ_KILOMETERS * pacific_sea;
    double sq_feet = SQ_FEET_PER_SQ_MILES * sq_miles;
    double sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
    double acres = ACRES_PER_SQ_MILES * sq_miles;

    printf("\tIn other units of measure, this is\n\n");
    printf("%22.7e acres\n", acres);
    printf("%22.7e square miles\n", sq_miles);
    printf("%22.7e square feet\n", sq_feet);
    printf("%22.7e square inches\n\n", sq_inches);

    return EXIT_SUCCESS;
}

