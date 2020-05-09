#include <stdio.h>
int main()
{
    int a,k,b,c,n;
    scanf("%d %d %d",&a,&b,&c);
    k=b+c;
    if(a!=k){
        n=b+1;
        if(a!=3&&n>(a/2)){
            n=n-b;
        }
    }

    else{
        n=a-b;
    }

    printf("%d",n);
    return 0;
}
