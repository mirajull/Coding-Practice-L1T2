#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,k,j,i,sum=0;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++){
        k=pow(-1,i);
        k=k*i;
        sum=sum+k;
    }
    printf("%I64d",sum);
    return 0;
}
