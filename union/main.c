#include <stdio.h>
union Student {
    int age;
    int marks;
};

int main(int argc, char *argv[])
{
    //demonstrate the use of union

    union Student student;
    student.marks = 3;

    printf("%d\n", student.age);

    return 0;
}
