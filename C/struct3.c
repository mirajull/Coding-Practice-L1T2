#include <stdio.h>

struct student
{
    char name[10];
    int id;
    char dept_name[10];
    float cgpa;

} mirajul={"Miraj",1405119,"CSE",3.34};

int main(void)
{
    printf("student name  : %s\n",mirajul.name);
    printf("student roll  : %d\n",mirajul.id);
    printf("student name  : %s\n",mirajul.dept_name);
    printf("student name  : %0.2f\n",mirajul.cgpa);
    return 0;
}
