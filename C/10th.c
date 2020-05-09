#include <stdio.h>
int main()
{
    int a,b,n,i,x,max=0,y=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        x=b-a;
        y=y+x;
        if(y>max){
            max=y;
        }
    }
    printf("%d",max);
    return 0;
}
