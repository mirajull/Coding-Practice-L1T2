#include <stdio.h>
int main()
{
    int n,a,b,c,h,f=0,i,k=1,j,v,g=0;
    scanf("%d",&n);
    int ara1[n],ara2[n];
    for(i=1;i<=n*n;i++){
        scanf("%d %d",&h,&v);
        if(i==1){
            a=h;
            b=v;

        }
        if(i>0){
            if(h!=a&&v!=b){
                if(f==0){
                    printf("%d ",k);
                    printf("%d ",i);
                    ara1[f]=h;
                    ara2[f]=v;
                }
                else{
                    for(j=0;j<f;j++){
                        if(h!=ara1[j]){
                            g++;
                        }
                        if(v!=ara2[j]){
                            g++;
                        }
                    }
                    if(g==2){
                        printf("%d ",i);
                    }
                }
                f++;
            }
        }
    }
    if(f==0){
        printf("%d",k);
    }
    return 0;
}
