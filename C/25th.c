#include <stdio.h>
int main()
{
    int n,m,k,p;
    scanf("%d %d",&n,&m);
    p=n;
    while(n>=m){
        p=p+n/m;
        n=n/m+n%m;
    }
    printf("%d",p);
    return 0;
}
