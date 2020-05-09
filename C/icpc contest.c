#include <stdio.h>
int main()
{
    int n,k,i,j,p,f=0,g,sum=0,u;
    scanf("%d %d\n",&n,&p);
    u=n/p;
    int ara[n];
    for(j=0;j<n;j++){
        scanf("%d",&ara[j]);
    }
    for(i=1;i<=p;i++){
        for(j=0;j<n;j++){
            if(ara[j]==i){
                f++;
            }
        }
        if(f>=u){
            g=f-u;
            sum=sum+g;
        }
        f=0;
    }
    if(p==1){
        sum=0;
    }
    printf("%d",sum);
    return 0;
}
