#include <stdio.h>
int main()
{
    double ang,h,m;
    printf("enter the hour: ");
    scanf("%lf",&h);
    printf("enter the minute: ");
    scanf("%lf",&m);
    ang=(m/5-h)*30;
    if(ang<0){
        ang=-ang;
    }
    if(ang>180){
        ang=360-ang;
    }
    ang=ang-.5*m;
    printf("the angle between hour and minute is %.2lf",ang);
    return 0;
}
