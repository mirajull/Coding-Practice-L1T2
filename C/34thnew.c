int prime(int x){
    int l;
    for(l=2;l*l<=x;l++){
        if(x%l==0){
            return 0;
            break;
        }
    }
    return 1;
}
#include <stdio.h>
int main()
{
    int n,i,j,k,p,f=0,g=0,sum=2;
    scanf("%d %d",&n,&p);
    for(i=3;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==0){
            sum=sum+i+1;
            if(sum<=n){
                if(prime(sum)==1){
                    g++;
                }
                sum=i;
            }
            else{
                break;
            }
        }
        else{
            f=0;
        }
    }
    //printf("%d",g);
    if(p<=g){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

