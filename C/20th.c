#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,n,f=0;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(f==0 &&str[i]=='h'&&str[j]=='e'){
                f++;
            }
            else if(f>0 &&str[i]=='e'&&str[j]=='l'){
                f++;
            }
            else if(f>1 &&str[i]=='l'&&str[j]=='l'){
                f++;
            }
            else if(f>2 &&str[i]=='l'&&str[j]=='o'){
                f++;
            }
            else{
                f=f;
            }
        }
    }
    if(f>=5){
        printf("YES");
    }
    else if(f<5){
        printf("NO");
    }
    return 0;
}
