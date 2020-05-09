#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002],word[100];
    int i,j,length,p;
    gets(s);
    length=strlen(s);
    p=0;
    for(i=0,j=0;i<length;i++){
        if(s[i]>='a'&& s[i]<='z'){
            if(p==0){
                p=1;
                word[j]='A'+s[i]-'a';
                j++;
            }
            else{
                word[j]=s[i];
                j++;
            }
        }
        else if(s[i]>='A'&&s[i]<='B'){
                if(p==0){
                    p=1;
                    word[j]=s[i];
                    j++;
                }
                else{
                    word[j]='a'+s[i]-'A';
                    j++;
                }
        }
        else if(s[i]>='0'&&s[i]<='9'){
            if(p==0){
                p=1;
                word[j]=s[i];
                j++;
            }
        }
        else if(p==1){
            p=0;
            word[j]='\0';
            j=0;
            printf("%s\n",word);
        }
    }
    return 0;
}

