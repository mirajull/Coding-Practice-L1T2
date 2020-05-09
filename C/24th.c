#include <stdio.h>
#include <string.h>
int main()
{
    int n,k,i;
    char str1[100000],str2[100000],str3[100000];
    gets(str1);
    gets(str2);
    n=strlen(str1);
    for(i=0;i<n;i++){
        if(str1[i]==str2[i]){
            str3[i]='0';
        }
        else{
            str3[i]='1';
        }
    }
    str3[n]=0;
    printf("%s\n",str3);
    return 0;
}
