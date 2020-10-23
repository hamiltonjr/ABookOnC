#ifndef CLASS_INFO_H
#define CLASS_INFO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define CLASS_SIZE 100


/* type student */
typedef struct
{
    char *last_name;
    int student_id;
    char grade;
} student;


/* prototype */
int fail(student *class);
void show(student s);

#endif /* CLASS_INFO_H */

