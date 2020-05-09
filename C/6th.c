#include <stdio.h>
int main()
{
    int m,n,r1,r;
    scanf("%d %d",&m,&n);
    r1=m*n;
    if(r1%2==0){
        r=r1/2;
    }
    else{
        r=(r1-1)/2;
    }
    printf("%d\n",r);
    return 0;
}
