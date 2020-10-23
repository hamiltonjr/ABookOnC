#include "class_info.h"


/* 
 * count fails
 * param..: class, an array if students
 * return.: number of fails
 */

int fail(student *class)
{
    register size_t cnt = 0;
 
    for (register size_t i = 0; i < CLASS_SIZE; ++i)
    {
        cnt += class[i].grade == 'F';
    }

    return cnt;
}

void show(student s)
{

    /* show student */
    printf("\n\tGrade......: %c\n", s.grade);
    printf("\tLast name..: %s\n", s.last_name);
    printf("\tStudent ID.: %d\n\n", s.student_id);

}
