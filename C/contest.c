#include <stdio.h>
int main()
{

    int n,a,p,i,k,r,l,j,sum=0;
    scanf("%d\n",&n);
    scanf("%d %d",&r,&l);
    j=l;
    for(i=0;i<n-1;i++){
        scanf("%d %d",&a,&p);
        if(p>=l){
            p=l;
        }
        else{
            p=p;
        }
        k=p*a;
        sum=sum+k;
        l=p;
    }
    printf("%d",sum+(r*j));
    return 0;
}
