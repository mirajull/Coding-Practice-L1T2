#include<stdio.h>
void func1(void)
{
    printf("Mirajul islam");
}
int func2(void)
{
    return 1405119;
}
int func3(int x,int y)
{
    return x+y ;
}
int main()
{
    int x,y;
    void(*Pn1)(void);
    int(*Pn2)(void);
    int(*Pn3)(int,int);
    Pn1=func1;
    Pn2=func2;
    Pn3=func3;
    (*Pn1)();
    y=(*Pn2)();
    x=(*Pn3)(1900,95);
    printf("\t%d %d",y,x);
    return 0;
}
