#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct _Student
{
    int roll;
    double score;
} Student;

//
// Comparison function that is passed as the 4th parameter
// to qsort() function
//
int cmp(const void *pA, const void *pB)
{
    return (*((Student*)pA)).roll - (*((Student*)pB)).roll;
}

int main()
{
    int i;

    Student a[] = {
        {15, 80},
        {68, 82},
        {112, 80},
        {85, 70},
        {77, 80},
        {99, 68}
    };

    qsort(a, sizeof(a)/sizeof(a[0]), sizeof(a[0]), cmp);
    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
        printf("<%d, %0.2lf>\n", a[i].roll, a[i].score);

    getch();
    return 0;
}

