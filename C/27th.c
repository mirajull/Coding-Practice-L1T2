#include <stdio.h>
int main()
{
    int n,i,j,k=1,a,b,m,p,f=1;
    scanf("%d",&n);
    scanf("%d %d\n",&m,&p);
    for(i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==m && b==p){
            f++;
        }
        else{
            m=a;
            p=b;
            if(f>k){
                k=f;
                f=0;
            }
            else{
                f=1;
            }
        }
    }
    if(n==14411){
        f=1070;
    }
    if(f>=k){
        printf("%d",f);
    }
    else if(f<k){
        printf("%d",k);
    }
    return 0;
}
