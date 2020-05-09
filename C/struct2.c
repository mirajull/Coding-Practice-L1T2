#include <stdio.h>
void print(int x,int y,int z)
{
    printf("%d / %d /%d",x,y,z);
}

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date bday={19,8,1995};
    print(bday.day,bday.month,bday.year);
    return 0;
}
