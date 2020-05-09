#include <stdio.h>
int isReverse(char str[])
{
    int i=0;
    if(str[i]){
        return isReverse(str[i]);
        i++;
    }
    printf("%c",str[i]);
}
int main()
{
    char str[127];
    gets(str);
    isReverse(str);
    return 0;
}
