#include <stdio.h>
int main()
{
    int a1,b1,c1,a2,b2,c2;
    int x,y;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&b1);
    scanf("%d",&b2);
    scanf("%d",&c1);
    scanf("%d",&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-c1*a2)/(a1*b2-a2*b1);
    printf("%d and %d",x,y);
    return 0;
}
