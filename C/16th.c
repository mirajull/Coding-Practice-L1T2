#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ans[100];
    int i,j=0,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i+=2){
        if(str[i]=='1'){
            ans[j]='1';
            j+=2;
        }
    }
    for(i=0;i<len;i+=2){
        if(str[i]=='2'){
            ans[j]='2';
            j+=2;
        }
    }
    for(i=0;i<len;i+=2){
        if(str[i]=='3'){
            ans[j]='3';
            j+=2;
        }
    }
    for(i=1;i<len-1;i+=2){
        ans[i]='+';
    }
    ans[len]='\0';
    printf("%s",ans);
    return 0;
}
