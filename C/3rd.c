#include<stdio.h>

int main()
{
    int n , k , i , ans=0 ;

    scanf("%d %d", &n, &k );

    int score[n] ;

    for(i=1 ; i<=n ; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i=1 ; i<=n ; i++)
    {
        if(score[i]>=score[k] && score[i]!=0)
            ans++;


    }

    printf("%d", ans);

    return 0;
}
