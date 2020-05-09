#include <stdio.h>
int main()
{
    int a,b,value;
    char m;
    printf("plz enter a number: ");
    scanf("%d", &a);
    printf("plz enter another number: ");
    scanf("%d", &b);
    value=a+b;
    m='+';
    printf("%d%c%d=%d\n",a,m,b,value);
    return 0;

}
