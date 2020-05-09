#include<stdio.h>
#include<conio.h>

int rotateBits(int x,int n)
{
    int i,p ;

    for (i=1;i<=n;i++)
    {
       p=x & 1;
       x=(unsigned)x>>1;
       x=x | (p<<((sizeof(x)*8)-1));
    }
    return x;
}

int printBits(int x)
{
    int i,s=sizeof(x)*8;

    for (i=1;i<=s;i++)
    {
        if ((x & (1<<(s-1)))==0)
            printf("%d",0);
        else
            printf("%d",1);
        x=x<<1;
    }
}

int main()
{
    int x,n;

    printf("Please input the Integer:");
    scanf("%d",& x);

    printf("Please input the number of rotation:");
    scanf("%d",& n);

    printBits(x);
    printf("\n");
    printBits(rotateBits(x,n));

	getch();
    return 0;
}

