#include <stdio.h>
int main()
{
    long long int n,i,p,j,k,f=0,m=1,l,r=0;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            p=i;
            for(j=2;j*j<=p;j++){
                if(p%(j*j)!=0){
                    f++;
                }
            }
            if(f==j-2&&f!=0){
                l=p;
                f=0;
            }
        }
    }
    if(n<=3){
        l=n;
    }
    else if(n==4){
        l=2;
    }
    printf("%I64d",l);
    return 0;
}
