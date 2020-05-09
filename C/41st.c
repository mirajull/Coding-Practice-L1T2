#include <stdio.h>
int main()
{
    int n,i,j,r,a,b,p,q,f=0;
    scanf("%d %d",&a,&b);
    char k;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            scanf("%c ",&k);
            if(i==j&&k=='S'){
                 f=i;
            }
            //else if(i!=j&&k=='S'){
                    //f++;
            //}
            else if(k=='.'){
                f=f;
            }
        }
    }
    r=(a*b)-f;
    printf("%d",f);
    return 0;
}
