#include <stdio.h>
void showbits(int n)
{
    int i,k,mask;
    for(i=31;i>=0;i--){
        mask=1<<i;
        k=n&mask;

        if(k==0)
            printf("0");
        else
            printf("1");
    }


}
arr[target]
int *p;
p=(int*)malloc(n*sizeof(int));
scan(%d,p+i)

int main()
{

    int n;
    scanf("%d",&n);
    showbits(n);
    return 0;
}
