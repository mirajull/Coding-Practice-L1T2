
#include<stdio.h>
#include<conio.h>

int main()
{
    int h,m;
    float hAng, mAng;

    scanf("%d %d",&h,&m);

    mAng=m*6;
    h=h%12;
    hAng=30*h+m*0.5;

    float ans;
    ans=hAng-mAng;
    if(ans<0)ans=-ans;
    if(ans>180) ans==360-ans;
    printf("%f\n",ans);
    getch();
    return 0;
}
