/**
 * Exercise 09.
 */
#include <stdio.h>
#include <stdlib.h>
#define POUNDS_TO_KILOGRAMS 0.453592
#define OUNCES_TO_GRAMS 28.3495

int main()
{
    float lb, oz;

    // overture
    printf("\n\tThis program converts pounds to kilograms and ounces to grams.\n");
    
    // input
    printf("\tEnter pounds and ounces: ");
    scanf("%f%f", &lb, &oz);

    // conversion
    float kg = lb * POUNDS_TO_KILOGRAMS;
    float g = oz * OUNCES_TO_GRAMS;

    // output
    printf("\n\tConverted weight: %.2f kg and %.2f g.\n", kg, g);
    
    // converting to kilograms (with complete fractional part)
    kg += g / 1000.0;
    printf("\tIt is equivalent to: %.2f kg.\n\n", kg);
    
    return EXIT_SUCCESS;
}

