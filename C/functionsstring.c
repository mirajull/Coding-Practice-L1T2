#include<stdio.h>
int strlen(char*str)
{
   int i=0;
    while(*str++)
    {
        i++;
    }
    return i;
}
int main()
{
    int x;
    char p[20];
    char s[20]="Mimu";
    x=strlen(s);
    printf("%d",x);
    return 0;
}
