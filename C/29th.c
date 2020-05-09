#include <stdio.h>
int main()
{
    int n,a,b,i,j,k,f=0,g=0;
    scanf("%d",&n);
    for(i=2,j=n-2;i<n,j>1;i++,j--){
        for(k=2;k*k<=i;k++){
            if(i%k==0){
                f++;
            }
            if(j%k==0){
                g++;
            }
        }
        if(f>=1&&g>=1){
            break;
        }
        f=0;
        g=0;
    }
    printf("%d %d\n",i,j);
   return 0;
}
