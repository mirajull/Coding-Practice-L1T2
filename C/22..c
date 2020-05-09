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
int main()
{
    int k,n;
    scanf("%d %d",&n,&k);
    if(prime2(n,k)==1){
        printf("good");
    }
    return 0;
}
