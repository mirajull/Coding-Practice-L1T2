#include <stdio.h>
int bacteriaCount(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;

    else
        return bacteriaCount(n-1)+bacteriaCount(n-2)+2;
}
int main()
{
    int res,x;
    scanf("%d",&x);
    res= bacteriaCount(x);
    printf("%d",res);
    return 0;
}
