#include <stdio.h>
int main()
{
    long long int n,i,p,j,k,f;
    scanf("%I64d",&n);
    if(n<4){
        printf("%d",n);
    }
    else{
        for(i=2;i<=n;i++){
            if(n%i==0){
                p=i;
            }
            for(j=2;j*j<=p;j++){
                if(p%(j*j)==0){
                    f++;
                }
            }
            if(f==0){
                k=p;
            }
            else{
                f=0;
            }
        }
        if(n<=3){
            k=n;
            printf("%I64d",k);
        }
        else{
            printf("%I64d",k);
        }
    }
    return 0;
}
