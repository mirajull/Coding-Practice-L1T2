#include <stdio.h>
int SquareFib(int n)
{
    if(n==1||n==2){
        return 1;
    }
    else{
        return (SquareFib(n-1)*SquareFib(n-1)+SquareFib(n-2)*SquareFib(n-2));
    }
}
int main()
{
    int x,result;
    scanf("%d",&x);
    result= SquareFib(x);
    printf("%d",result);
    return 0;
}
