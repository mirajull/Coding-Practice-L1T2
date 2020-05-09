#include <stdio.h>
#include <conio.h>
#include <string.h>

int strcmpp(char*s1,char*s2)
{
    while(*s1||*s2){
        if(*s1 != *s2){
            return *s1-*s2;
        }
        *s1++;
        *s2++;
    }
    return 0;
}

int main()
{
    int x;
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    x=strcmpp(s1,s2);
    if(x==0){
        printf("equal");
    }
    else if(x>0){
        printf("first one is larger");
    }
    else{
        printf("first one is smaller");
    }
    return 0;
}
