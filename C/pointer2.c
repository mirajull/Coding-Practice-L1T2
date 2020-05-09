#include <stdio.h>
int main()
{
    float a=10.35;
    char *ptr;
    ptr=(char*)&a;
    ++ptr;
    printf("%x   %02x\n",ptr,*ptr);
}
