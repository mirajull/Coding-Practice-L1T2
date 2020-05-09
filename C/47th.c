#include <stdio.h>
int main()
{
    int n,a,b,f=0,i,j,k;
    scanf("%d %d",&a,&b);
    if(a>=b){
        k=a;
    }
    else{
        k=b;
    }
    for(i=0;i<=k;i++){
        for(j=0;j<=k;j++){
            if(i*i+j==a&&j*j+i==b){
                f++;
            }
        }
    }
    printf("%d",f);
    return 0;

}
