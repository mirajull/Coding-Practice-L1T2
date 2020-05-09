#include<stdio.h>

int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    if(ara[0]==1){
            f++;
        }
    for(i=1;i<n-1;i++){
        if(ara[i]==1){
            f++;
        }
        if(ara[i]==0 && (ara[i-1] !=0 && ara[i+1]!=0)){
                f++;
        }
    }
    if(n>1){
        if(ara[n-1]==1){
            f++;
        }
    }
    printf("%d",f);

    return 0;
}
