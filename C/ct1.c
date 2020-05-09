#include <stdio.h>
int main()
{
    int n,a=0,b;
    n=10;
    b=0;
    do{
        a=b+a;
        b++;
    }while(b<=n);
    printf("%d",a);
    return 0;
}
