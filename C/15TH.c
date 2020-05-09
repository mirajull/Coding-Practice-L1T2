#include <stdio.h>
#include <string.h>
int main()
{
    int i,j=0,n;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            printf("YES");
            break;
        }
        else{
            j++;
        }
    }
    if(j==n){
        printf("NO");
    }
    return 0;
}
