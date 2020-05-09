#include <stdio.h>
int per(int n)
{
   int i,d;
   d=1;
   for(i=1;i<=n;i++)
        d=d*i;
    return d;
}
int swap(int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;
}

int main()
{
    int i,j,x,d;
    int a=97,f=0;
    scanf("%d",&x);
    d=per(x);
    for(i=0;i<d;i++){
        for(j=0;j<x;j++)
        {

            printf("%c",a);
            a++;
            f++;
        }
        a=97;
        printf("\n");
        if(f==x-1){
            a++;
        }
    }
    return 0;
}
