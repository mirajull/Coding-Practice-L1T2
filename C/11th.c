#include <stdio.h>
int main()
{
    int i,j,f=0,e=0,n,length;
    char str[100];
    gets(str);
    length=strlen(str);
    if(length==1&&(str[0]>='A'&&str[0]<='Z')){
        str[0]='a'+str[0]-'A';
        printf("%s\n",str);
    }
    else if(length==1&&(str[0]>='a'&&str[0]<='z')){
        str[0]='A'+str[0]-'a';
        printf("%s\n",str);
    }
    else if(length>1){
        for(i=1;i<length;i++){
            if(str[0]>='A'&&str[0]<='Z'){
                f++;
                if(str[i]>='A'&&str[i]<='Z'){
                    e++;
                }
                else if(str[i]>='a'&&str[i]<='z'){
                    e=0;
                }
            }
            else if(str[0]>='a'&&str[0]<='z'){
                f=0;
                if(str[i]>='A'&&str[i]<='Z'){
                    e++;
                }
                else if(str[i]>='a'&&str[i]<='z'){
                    e=0;
                }
            }
        }

        if(f>0&&e==(length-1)){
            for(n=0;n<length;n++){
                str[n]='a'+str[n]-'A';
            }
            printf("%s\n",str);
        }
        else if(f==0&&e==(length-1)){
            str[0]='A'+str[0]-'a';
            for(n=1;n<length;n++){
                str[n]='a'+str[n]-'A';
            }
            printf("%s\n",str);
        }
        else{
            printf("%s\n",str);
        }
    }
    return 0;
}
