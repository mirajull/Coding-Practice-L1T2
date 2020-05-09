#include <stdio.h>
#include<conio.h>
int main()
{
    int n,h,m,x,i,araA[100],araH[100],araM[100];
    float angle;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&h,&m);
        if(h>=12){
            h=h%12;
        }
        araH[i]=h;
        araM[i]=m;
        x=(h*5)-m;
        if(x<0){
            x=-x;
        }
        angle=6*x+ 0.5*m;
        if(angle>180){
            angle=360-angle;
        }
        araA[i]=angle;
    }
    for(i=0;i<n;i++){
        printf("%d %d %d\n",araH[i],araM[i],araA[i]);
    }
    return 0;
}
