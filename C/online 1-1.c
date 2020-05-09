#include <stdio.h>
int main()
{
    double n,a,b;
    printf("enter the number of hour: ");
    scanf("%lf",&a);
    printf("enter the number of minutes: ");
    scanf("%lf",&b);
    if(b==5*a){
        printf("the angle is 0 degree");
    }
    else if(b>a){
        n= (b/5-a)*30 - .5*b;
        if(n<=180){
            printf("the angle is %.2lf degree\n",n);
        }
        else{
            printf("the angle is %.2lf degree\n", n-180);
        }
    }
    else if(b<a){
        n=(a-b/5)*30-.5*b;
        if(n<=180){
            printf("the angle is %.2lf degree\n",n);
        }
        else{
            printf("the angle is %.2lf degree\n", n-180);
        }
    }
    return 0;
}
