#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char*funcx()
{
    char*ptr;
    ptr=malloc(32*sizeof(char));
    strcpy(ptr,"Mirajul Islam");
    return ptr;
}

int main()
{
    char*str;
    str=funcx();
    puts(str);
    free(str);
    return 0;
}
