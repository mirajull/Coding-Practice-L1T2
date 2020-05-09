#include <stdio.h>
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    if(n>3){
        printf("%d\n",n);
    }
    else if(n==1){
        printf("%d\n",n);
    }
    else{
        printf("%d\n",n-1);
    }
    if(n==4){
        printf("3 1 4 2");
    }
    for(i=1;i<=n;i+=2){
        if(n!=4){
        printf("%d ",i);
        }
    }
    for(j=2;j<=n;j+=2){
        if(n>4){
            printf("%d ",j);
        }
    }
    return 0;
}
