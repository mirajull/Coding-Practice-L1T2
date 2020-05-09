#include <stdio.h>
int main()
{
    int n,g,h,m,i,j,k,f=0,p;
    scanf("%d",&n);
    int ara1[n],ara2[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&k,&m);
        ara1[i]=k;
        ara2[i]=m;
    }
    for(j=0;j<n;j++){
        for(p=0;p<n;p++){
            if(ara1[j]==ara2[p]){
                f++;
            }
        }
    }
    printf("%d",f);
    return 0;
}
