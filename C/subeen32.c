#include <stdio.h>
int main()
{
    double p,i,n,r,m;
    printf("amount of starting money: ");
    scanf("%lf",&i);
    printf("number of years: ");
    scanf("%lf",&n);
    printf("rate of interest: ");
    scanf("%lf",&r);
    p= i+i*n*r;
    m= p/(n*12);
    printf("i will have to give back = %.2lf\n",p);
    printf("monthly payment: %.2lf",m);
    return 0;
}

