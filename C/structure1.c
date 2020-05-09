#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;
    int level;
    int term;
};
int main()
{
    struct student mirajul;
    strcpy(mirajul.name,"mirajul islam");
    mirajul.roll=1405119;
    mirajul.level= 2;
    mirajul.cgpa=3.34;
    mirajul.term=  1;
    printf("%s %d %d %.3f %d",mirajul.name,mirajul.roll,mirajul.level,mirajul.cgpa,mirajul.term);
    return 0;
}
