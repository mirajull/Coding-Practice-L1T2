#include <stdio.h>
int main()
{
    int a,b,x,i;
    printf("the first number: ");
    scanf("%d",&a);
    print("the second number: ");
    scanf("%d",&b);
    if(a<=b){
        x=a;
        if(a%x==0 && b%x==0){
            printf("gcd is %d\n",x);
        }
        else{
            x-=1
        }
    }
}
