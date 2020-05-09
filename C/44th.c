#include <stdio.h>
#include <string.h>
int main()
{
    int n,a,b,i,j,f,c,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum=sum+(a*i);
    }
    j=sum-b;
    if(j<0){
        j=0;
    }
    printf("%d",j);
    return 0;
}
