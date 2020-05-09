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
    int n;
    scanf("%d",&n);
    if(prime(n)==1){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}

