#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i,length,f=0;
    scanf("%c",str);
    length=strlen(str);
    for(i=0;i<length;i++){
        if(str[i]==str[i+1]){
            f++;
        }
        else{
            f=0;
        }
    }
    printf("%d",f);
    return 0;
}
