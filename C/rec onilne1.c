#include <stdio.h>
int sum=0;
int SumOfDigits(int x)
{
    int y,n;
    y=x%10;
    sum=sum+y;
    if(n>=10){
        return SumOfDigits(x/10);
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(SumOfDigits(n)==1){
        printf("%d",sum);
    }
}
