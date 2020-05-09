#include <stdio.h>
#include <string.h>
int main()
{
    int len1,len2,i,f=0,d=0,g=0;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len1;i++){
        if((str1[i]>='a'&&str1[i]<='z')&&(str2[i]>='a'&&str2[i]<='z')){
                if(str1[i]>str2[i]){
                    f++;
                }
                else if(str1[i]<str2[i]){
                    d++;
                }
                else{
                    g++;
                }
        }
        else if((str1[i]>='a'&&str1[i]<='z')&&(str2[i]>='A'&&str2[i]<='Z')){
                if(str1[i]>str2[i]+32){
                    f++;
                }
                else if(str1[i]<str2[i]+32){
                    d++;
                }
                else{
                    g++;
                }
        }
        else if((str1[i]>='A'&&str1[i]<='Z')&&(str2[i]>='a'&&str2[i]<='z')){
                if(str1[i]>str2[i]-32){
                    f++;
                }
                else if(str1[i]<str2[i]-32){
                    d++;
                }
                else{
                    g++;
                }
            }
        else if((str1[i]>='A'&&str1[i]<='Z')&&(str2[i]>='A'&&str2[i]<='Z')){
                if(str1[i]>str2[i]){
                    f++;
                }
                else if(str1[i]<str2[i]){
                    d++;
                }
                else{
                    g++;
                }
        }
        if(f==1){
            printf("1");
            break;
        }
        else if(d==1){
            printf("-1");
            break;
        }
    }
    if(g==len1){
        printf("0");
    }
    return 0;
}
