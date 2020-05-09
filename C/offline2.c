#include<stdio.h>
#include<conio.h>

int pair(int m)
{
    int j,q,s;
    s=sizeof(m)* 8;
    m=0;

    for (j=1;j<=s;j++)
    {
        if ((m & (1 << 31))!=0)
            m=m+1;
        m=m<<1;
    }

    if (q%2 == 0)
        return 1;
    else
        return 0;
}

int encode(int a,int b,int c)
{
    int h,p;

    h=((a << 11)|(b << 8)|(c << 1));

    if (pair(h)==0)
        p=1;
    else
        p=0;
    h= h|p;

    return h;
}

int roll(unsigned m)
{
    int r,q;

    q=(1 << 31) >> 20;
    r=(unsigned) (m & q) >> 11;

    return r;
}

int subject(unsigned m)
{
    int s,q;

    q=(unsigned)((1 << 31) >> 2) >> 21;
    s=(unsigned) (m & q) >> 8;

    return s;
}

int score(unsigned m)
{
    int n,q;

    q=(unsigned)((1<<31)>>6)>>24;
    n=(unsigned)(m&q)>>1;

    return n;
}

int main()
{
    int a,b,c,input;
    unsigned z;

    printf("Press 1 to encode and press 2 to decode:");
    scanf("%d",& input);
    printf("\n");

    if (input==1)
    {
        printf("INPUT 1:");
        scanf("%d",& a);
        printf("INPUT 2:");
        scanf("%d",& b);
        printf("INPUT 3:");
        scanf("%d",&c);
        printf("\n");

        printf("Encoded unsigned integer:%u\n",encode(a,b,c));
    }
    if (input==2)
    {
        printf("Please input the unsigned integer:");
        scanf("%u",&z);
        printf("\n");

        if (pair(z)==1)
        {
            printf("ROLL:%d\n",roll(z));
            printf("Subject Code:%d\n",subject(z));
            printf("Score:%d\n",score(z));
        }
        else
            printf("Error:Incorrect integer");
    }

	getch();
    return 0;
}
