#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y ;
    printf("enter the value of x+y= ");
    scanf("%lf",& x_plus_y);
    printf("enter the value if x-y= ");
    scanf("%lf",& x_minus_y);
    x=(x_plus_y+x_minus_y)/2;
    y=(x_plus_y-x_minus_y)/2;
    printf("x is %lf\n",x);
    printf("y is %lf\n",y);
    return 0;

}
