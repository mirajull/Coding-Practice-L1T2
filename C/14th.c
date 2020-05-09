#include <stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d\n",&n);
    char str[n];
    gets(str);
    for(i=0;i<n;i++){
        if(str[i]==str[i+1]){
            f++;
        }
        else if(str[i]!=str[i+1]){
            f=f;
        }
    }
    printf("%d",f);
    return 0;
}
