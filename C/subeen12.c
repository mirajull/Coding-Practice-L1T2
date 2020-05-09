#include <stdio.h>
int main()
{
    int a,b;
    printf("please enter a number: ");
    scanf("%d", &a);
    printf("please enter another number: ");
    scanf("%d", &b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    return 0;
}
