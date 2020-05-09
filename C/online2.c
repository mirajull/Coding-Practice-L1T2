#include <stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--){
        for(j=n-i;j>1;j--){
            printf(" ");
        }
        for(j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
