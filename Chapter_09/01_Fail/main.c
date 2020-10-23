#include "class_info.h"

int main()
{

    student tmp, class[CLASS_SIZE];

    /* new student */
    tmp.grade = 'A';
    tmp.last_name = "Casanova";
    tmp.student_id = 910017;
    show(tmp);

    /* a class student */
    class[0].grade = 'B';
    class[0].last_name = "Simpson";
    class[0].student_id = 910018;
    show(class[0]);

    /* other class student */
    class[1].grade = 'F';
    class[1].last_name = "Morrison";
    class[1].student_id = 910019;
    show(class[1]);

    /* result */
    printf("\n\tNumber of fails: %d\n\n", fail(class));


    return EXIT_SUCCESS;

}

