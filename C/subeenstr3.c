#include <stdio.h>
int main()
{
    int i,length;
    char country[]={'b','a','n','g','l','a','d','e','s','h','\0'};
    length=10;
    for(i=0;i<length;i++){
        if(country[i]>=97&&country[i]<=122){
            country[i]='A'+(country[i]-'a');
        }
    }
    printf("country is %s\n",country);
    return 0;
}
