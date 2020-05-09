#include <stdio.h>
int main()
{
    int i,j,k,n,m,f=0,p;
    scanf("%d %d",&n,&m);
    int ara[2*m];
    for(j=1;j<=n;j++){
        for(i=0,k=i+1;i<2*m,k<2*m+1;i++,k++){
            scanf("%d",&p);
            ara[i]=p;
        }
        for(i=0,k=i+1;i<2*m,k<2*m+1;i+=2,k+=2){
            if(ara[i]==1||ara[k]==1){
                f++;
            }
            else if(ara[i]==1&&ara[k]==1){
                f++;
            }
        }
    }
    printf("%d",f);
    return 0;
}
