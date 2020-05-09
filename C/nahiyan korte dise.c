#include <stdio.h>
int main()
{
    int n,a,i,b=0;
    scanf("%d\n",&n);
    char str1[n],str2[n];
    gets(str1);
    gets(str2);
    for(i=0;i<n;i++){
        if(str1[i]<=str2[i]){
            a=str2[i]-str1[i];
            if(a<=5){
                a=a;
            }
            else if(a>5){
                a=10-a;
            }
        }
        else if(str1[i]>str2[i]){
            a=str1[i]-str2[i];
            if(a<=5){
                a=a;
            }
            else{
                a=10-a;
            }
        }
        b=b+a;
    }
    printf("%d\n",b);
    return 0;
}
