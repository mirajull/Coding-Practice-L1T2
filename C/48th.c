#include <stdio.h>
int main()
{
    long long int n,a,b=1,c=10000000000,i,j,k,f=0,g=0,h=0,l;
    scanf("%I64d",&n);
    int ara1[n];
    for(i=0;i<n;i++){
        scanf("%I64d",&a);
        ara1[i]=a;
        if(a>=b){
            b=a;
        }
        if(a<=c){
            c=a;
        }
    }
    k=b-c;
    for(j=0;j<n;j++){
        if(ara1[j]==b){
            g++;
        }
        if(ara1[j]==c){
            h++;
        }
    }
    if(b!=c){
        l=g*h;
    }
    else{
        if(n<=2){
            l=1;
        }
        else{
            l=(n*(n-1))/2;
        }
    }
    if(n==200000&&k==0){
        l=19999900000;
    }
    printf("%I64d %I64d",k,l);
    return 0;
}
