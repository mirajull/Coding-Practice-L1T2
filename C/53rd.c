#include <stdio.h>
int main()
{
    int n,f=0,g=0,a,i,j=0,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){

        if(f==2){
            if(j!=0){
                printf("%d",j);
                break;
            }
        }
        else if(g==2){
            if(k!=0){
                printf("%d",k);
                break;
            }
        }
        scanf("%d",&a);
        if(a%2==0){
            f++;
            k=i+1;
        }
        else {
            g++;
            j=i+1;
        }
    }
    printf("NO");
    return 0;
}
