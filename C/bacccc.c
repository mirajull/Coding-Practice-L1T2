#include <stdio.h>
int bacteriaCount(int n)
{
    int i;
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    if(n==2||n==3)
        return bacteriaCount(n-1)+bacteriaCount(n-2);
    else
        return 2*bacteriaCount(n-3)+(bacteriaCount(n-2)-bacteriaCount(n-3))+bacteriaCount(n-1);
}


int main()
{   int x,p;
    scanf("%d",&x);
    p=bacteriaCount(x);
    printf("%d",p);
    return 0;
}
