#include<stdio.h>
#include<conio.h>


int x = 5;


#define abs(x) ((x) < 0 ? -(x) : (x))

int f()
{
    x = x*x;
    return x;
}

int main()
{
    int x = -5;
    double y = -10;

    printf("%d", abs(f()));
    getch();
    return 0;
}
