#include <stdio.h>
int main()
{
    int a,b,x,y,c,x1,y1,r,result;
    scanf("%d %d %d %d %d",&r,&x,&y,&x1,&y1);
    a=(x1-x);
    if(a<0){
        a=-a;
    }
    b=(y1-y);
    if(b<0){
        b=-b;
    }
    c=a+b;
    result=c/(2*r);
    if(c%(2*r)!=0){
        result++;
    }
    printf("%d",result);
    return 0;
}
