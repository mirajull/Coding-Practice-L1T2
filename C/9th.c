#include <stdio.h>
int main()
{
    int x=0,n,i,j,length;
    scanf("%d\n",&n);
    char str[10];
    for(i=0;i<n;i++){
        gets(str);
        length=strlen(str);
        for(j=0;j<length;j++)
        if(str[j]=='+'&&str[j+1]=='+'){
            x++;
        }
        else if(str[j]=='-'&&str[j+1]=='-'){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
