#include <stdio.h>
struct student
{
    char name[24];
    int id_no;
    char dept_name[5];
    float cgpa;
};
int main()
{
    struct student mirajul;
    printf("%d",sizeof(mirajul));
    return 0;
}
