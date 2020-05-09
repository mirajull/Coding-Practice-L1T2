#include <stdio.h>
#include <string.h>
int main()
{
    int m,s,n,i=0,j=0;
    char str1[30]="mirajul + ";
    char str2[]=" mimu";
    while(str1[i]){
        i++;
    }
    while(str2[j]){
        str1++ = str2++;
        j++;
    }
    printf("%s",str1);
    return 0;

}
