#include <stdio.h>
int main()
{
    int n,a,b,i,j,f=0,p,result;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&a);
            if(a==1){
                b=i;
                p=j;
            }
        }
        printf("\n");
    }
    if(b>=3&&p>=3){
        result=(b-3)+(p-3);
    }
    else if(b>=3&&p<=3){
        result=(b-3)+(3-p);
    }
    else if(b<=3&&p>=3){
        result=(3-b)+(p-3);
    }
    else{
        result=(3-p)+(3-b);
    }
    printf("%d",result);
    return 0;
}
