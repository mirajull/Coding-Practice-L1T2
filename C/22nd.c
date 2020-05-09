#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j=1,k,m;
    scanf("%d\n",&n);
    scanf("%d\n",&m);
    for(i=1;i<n;i++){
        scanf("%d",&k);
        if(k==m){
            j=j;
        }
        else if(k!=m){
            j++;
        }
        m=k;
    }
    printf("%d",j);
    return 0;
}
