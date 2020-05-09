#include <stdio.h>
char*strcatt(char*dest,const char*src)
{
    //int i = 0, j = 0;
    char*x;
    x=dest;
    while(*x)
        *x++;
    while (*src)
        *x++ = *src++;
    //dest[i] = '\0';
    return x;
}


int main()
{
    char *x;
    char*p="Mirajul's wife is ";
    char*q="Mimu";
    x=strcatt(p,q);
    printf("%s",x);
    return 0;
}
