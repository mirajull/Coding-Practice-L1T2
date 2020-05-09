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
int prime2(int r,int e){
    int c;
    for(c=r+1;c<e;c++){
        if(prime(c)==1){
            return 0;
        }
    }
    return 1;
}
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n,i,j,k,m,f=0,p,g=0,v;
    scanf("%d %d",&n,&p);
    for(v=4;v<=n;v++){
        for(i=2,j=v-3;i<=n,j>1;i++,j--){
            if(prime(i)==1&&prime(j)==1){
                if(prime2(i,j)==1&& i!=j){
                    f++;
                }
            }
            if(f>0){
               g++;
               f=0;
               break;
            }
        }
    }
    if(g>=p){
        printf("YES");
    }
    else{
        printf("NO");
    }
    //printf("%d",g);
    return 0;
}
