#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int i,r,f,j,g,h,l,k,b=0,c=0;
   for(i=0,j=0,f=0,g=0,h=0;i<n;i++){
    int a;
    scanf("%d",&a);
    if(a==4){
        j++;
    }
    else if(a==3){
        f++;
    }
    else if(a==2){
        g++;
    }
    else if(a==1){
        h++;
    }
   }
    if(h<=f){
        h=0;
    }
    else if(h>f){
        h=h-f;
    }
 
    int x = (g*2)/4 ;  
 
    int y = ((g*2)%4 + h ) /4;
 
    if(((g*2)%4 + h ) %4 != 0) y++;
    r=f+h+x+y;
    printf("%d",r);
    return 0;


 
 
   
}
 
