#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n/2;i>0;i--){
        for(j=0;j<i;j++){
            printf(" ");
            if(j==i-1)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
