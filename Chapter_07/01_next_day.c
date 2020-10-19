// program.: next_day.c 
#include <stdio.h>
#include <stdlib.h>
#define DAYS_OF_WEEK 7


// enum type
enum day {sun, mon, tue, wed, thu, fri, sat};
typedef enum day day;


// prototype
day next_day(day d);
char* day_name(day d);


int main()
{

    day d = tue;
    printf("\n\tIf today is %s, tomorrow is %s\n\n",
            day_name(d), day_name(next_day(d)));


    return EXIT_SUCCESS;

}


// param..: a day as an enum day
// return.: next day as an enum day 
day next_day(day d)
{
    return ((day)(((int)d + 1) % DAYS_OF_WEEK));
}


// param..: a day as an enum day 
// return.: day name as string 
char* day_name(day d)
{
    char *name[7] = 
    { 
        "Sunday", "Monday", "Tuesday", "Wednesday", 
        "Thursday", "Friday", "Saturday"
    };

    return name[d];
}

