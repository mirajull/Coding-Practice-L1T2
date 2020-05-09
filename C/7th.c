#include <stdio.h>
int main()
{
    int i,j,n,a,b,c;
    scanf("%d",&n);
    for(i=0,j=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==1&&b==1&&c==1){
            j++;
        }
        else if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1)){
                j++;
                }
    }
    printf("%d\n",j);
    return 0;

}
