#include <stdio.h>
int main()
{
    int n,a,b;
    printf("the number of case: ");
    scanf("%d",&n);
    int i,j,d;
    for(i=1;i<=n;i++){
        scanf("%d",&j);
        a=j/10;
        b=j%10;
        d=b*10+a;
        printf("%d\n",d);
    }
    return 0;
}
