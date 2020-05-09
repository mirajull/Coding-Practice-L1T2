#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    printf("%d\n",sizeof(a));
    printf("%d %d",a,&a[0]);
    return 0;
}
