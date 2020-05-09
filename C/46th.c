#include <stdio.h>
int main()
{
    int n,a,b,c,x,sum=0,i,j,k,l;
    scanf("%d %d\n",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        sum=sum+c;
    }
    if(sum<=0){
        sum=-sum;
    }
    k=sum%x;
    l=sum/x;
    if(k!=0){
        l++;
    }
    printf("%d",l);
    return 0;
}
