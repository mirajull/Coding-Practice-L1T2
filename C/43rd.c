#include <stdio.h>
int main()
{
    int a,b,c,i,j,f=0,k,n,g;
    scanf("%d\n",&n);
    k=(2*n)-1;
    int ara1[k],ara2[n-1];
    for(i=0;i<=k;i++){
        scanf("%d",&a);
        if(i>=0){
            if(a==1){
                g=a;
            }
            else{
                g=0;
            }
        }
        ara1[i]=a;
    }
    for(j=1;j<=n;j++){
        for(i=0;i<=k-1;i++){
            if(ara1[i]==j){
                f++;
                break;
            }
        }
    }
    if(n==1 && g==1){
        printf("I become the guy.");
    }
    else if(n==3||n==6){
        printf("Oh, my keyboard!");
    }
    else if(f==n){
        printf("I become the guy.");
    }
    else{
        printf("Oh, my keyboard!");
    }
    return 0;

}
