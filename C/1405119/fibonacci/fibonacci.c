#include <stdio.h>
#include <math.h>
int SquareFib(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    else
        return SquareFib(n-1)+SquareFib(n-2)+2*sqrt(SquareFib(n-1)*SquareFib(n-2));
}
int main()
{
    int d,x;
    scanf("%d",&x);
    d=SquareFib(x);
    printf("%d",d);
    return 0;

}
