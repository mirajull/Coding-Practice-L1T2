#include <stdio.h>
int main()
{
    int a,b,ans,y,i,p;
    scanf("%d %d",&a,&b);
    ans=a;
    while(a>=b){
        ans=ans+a/b;
        a=a/b+a%b;
    }
    printf("%d",ans);
    return 0;
}
