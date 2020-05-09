#include<stdio.h>
#include<conio.h>

int rotatory(int m,int n)
{
    int j,b ;

    for (j=1;j<=n;j++)
    {
       b=m&1;
       m=(unsigned)m>>1;
       m=m|(b<<((sizeof(m)*8)-1));
    }
    return m;
}

int print(int m)
{
    int j,s=sizeof(m)*8;

    for (j=1;j<=s;j++)
    {
        if ((m & (1<<(s-1)))==0)
            printf("%d",0);
        else
            printf("%d",1);
        m=m<<1;
    }
}

int main()
{
    int m,n;

    printf("Input 1:");
    scanf("%d",& m);
    printf("Input 2:");
    scanf("%d",& n);
    print(m);
    printf("\n");
    print(rotatory(m,n));
    getch();
    return 0;
}

