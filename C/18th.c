#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    gets(str);
    if(str[0]>='a'&&str[0]<='z'){
        str[0]='A'+str[0]-'a';
    }
    else{
        str[0]=str[0];
    }
    printf("%s",str);
    return 0;
}
