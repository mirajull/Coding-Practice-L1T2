#include <stdio.h>
int main()
{
    long long int n,m,a,r1,r2,r;
    r1>0;
    r2>0;
    r>0;
    scanf("%I64d",&n);
    scanf("%I64d",&m);
    scanf("%I64d",&a);
    if(n<a||n==a){
        r1=1;
    }
    else if(n>a&&n%a==0){
        r1=n/a;
    }
    else if(n>a&&n%a!=0){
        r1= n/a;
        r1++;
    }
    if(m<a||m==a){
        r2=1;
    }
    else if(m>a&&m%a==0){
        r2=m/a;
    }
    else if(m>a&&m%a!=0){
        r2= m/a;
        r2++;
    }
    r=r1*r2;
    printf("%I64d\n",r);
    return 0;
}
