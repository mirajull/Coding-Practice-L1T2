#include <stdio.h>
int main()
{
    int a,b,n,k;
    scanf("%d %d",&a,&b);
    if(a<=b){
        k=a;
        n=b-a;
        n=n/2;
    }
    else if(a>b){
        k=b;
        n=a-b;
        n=n/2;
    }
    printf("%d %d",k,n);
    return 0;

}
