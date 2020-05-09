#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int j,i,length;
    gets(str);
    length=strlen(str);
    for(j=0;j<length;j++){
        if(str[j]>='A'&&str[j]<='Z'){
            str[j]='a'+(str[j]-'A');
        }
        else{
            str[j]=str[j];
        }
        if(str[j]=='a'||str[j]=='e'||str[j]=='u'||str[j]=='o'||str[j]=='i'||str[j]=='y'){
            printf("");
        }
        else{
            printf(".%c",str[j]);
        }
    }
    return 0;
}


