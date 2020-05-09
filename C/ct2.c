#include <stdio.h>
int main()
{
    int a,i,b=1,n,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        b=b+i;
        f++;
        if(b>8){
            break;
        }
    }
    printf("%d",f);
    return 0;
}
