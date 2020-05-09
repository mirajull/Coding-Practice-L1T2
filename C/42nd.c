#include <stdio.h>
int main()
{
    int n,i,j,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c<(a+b)){
        printf("NO");
    }
    else if(c==(a+b)||c== -(a+b)){
        printf("YES");
    }
    else if(c==(-a)||c==(-b)){
        printf("NO");
    }
     else if((a+b)<0){
            printf("NO");
        }
    else{
        if((a+b)%2==0 && c%2==0){
            printf("YES");
        }

        else if((a+b)%2!=0 && c%2!=0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}
