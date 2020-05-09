#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002],ch;
    int i,length,p;
    gets(s);
    length=strlen(s);
    p=0;
    for(i=0;i<length;i++){
        if(s[i]>='a'&&s[i]<='z'){
            if(p==0){
                p==1;
                ch='A'+ s[i]-'a';
                printf("%c",ch);
            }
            else{
                printf("%c",s[i]);
            }
        }
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            if(p==0){
                p=1;
                ch=s[i];
                printf("%c",ch);
            }
        }
        else{
            if(p==1){
            p=0;
            printf("\n");
            }
        }
    }
    printf("\n");
    return 0;

}
