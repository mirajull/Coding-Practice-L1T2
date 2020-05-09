int max(int x,int y){
    if(x>=y){
        return x;
    }
    return y;
}
#include <stdio.h>
int main()
{
    int n,a,b,c,f,g,h,j;
    scanf("%d %d %d",&a,&b,&c);
    f=a*b*c;
    g=a*(b+c);
    h=(a+b)*c;
    j=a+b+c;
    n=max(max(max(f,g),h),j);
    printf("%d",n);
    return 0;

}
