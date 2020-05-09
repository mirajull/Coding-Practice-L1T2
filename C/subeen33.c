#include <stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        s=s+i;
    }
    printf("sum is %d",s);
    return 0;
}
