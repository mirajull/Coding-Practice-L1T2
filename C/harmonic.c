#include<stdio.h>
#include<conio.h>

int main()
{
    double n;
    scanf("%lf",&n);

    double i;
    double sum;

    for(i=1;i<=n;i++){
        sum=(1/i);
        if(i!=n){
         printf("%.2lf+",sum);
        }
         else{
            printf("%.2lf",sum);
         }
    }

    return 0;
}
