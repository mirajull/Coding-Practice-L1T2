#include <stdio.h>
#include <string.h>
int main()
{
    int n,a,b,i,j,k,len;
    scanf("%d %d\n",&a,&b);
    char str1[a],temp;
    gets(str1);
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(str1[j]=='B'){
                if(str1[j+1]=='G'){
                    temp=str1[j];
                    str1[j]=str1[j+1];
                    str1[j+1]=temp;
                    j++;
                }
                else if(str1[j+1]=='B'){
                    str1[j]='B';
                }
            }
            else{
                str1[j]=str1[j];
            }
        }

    }
    printf("%s",str1);
    return 0;
}
