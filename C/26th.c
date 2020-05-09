#include <stdio.h>
#include <string.h>
int main()
{
    int n,k,i,j,len;
    char str[1000];
    gets(str);
    n=strlen(str);
    if(n==2){
        len=0;
    }
    else if(n>=3){
        len=(n/3);
        for(i=1;i<n-1;i+=3){
            for(j=i+3;j<n;j+=3){
                if(str[i]==str[j]){
                    break;
                }
            }
            if(j<n){
                len=len-1;
            }
        }
    }
    printf("%d",len);
    return 0;
}
