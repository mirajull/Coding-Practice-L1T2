#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,j,k,i,g=0,f=0,l=0;
    scanf("%d",&n);
    for(i=6;i<=n;i++){
        k=i;
        for(j=2;j<i;j++){
            while(k%j==0){
                k=k/j;
                f++;
            }
            if(f>0){
                l++;
            }
            f=0;
        }
        if(l==2){
            g++;
        }
        l=0;
    }
    printf("%d",g);
    return 0;
}
