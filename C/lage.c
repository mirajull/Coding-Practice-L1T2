
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,r,a,f,j,g,h,l,k;
    for(i=0,j=0,f=0,g=0,h=0;i<n;i++){
        scanf("%d",&a);
        if(a==4){
            j++;
        }
        else if(a==3){
            f++;
        }
        else if(a==2){
            g++;
            }
        else if(a==1){
            h++;
        }
    }
    printf("%d",h);
    return 0;
}
