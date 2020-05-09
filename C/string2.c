#include <stdio.h>
#include <dos.h>
#include <conio.h>
int main()
{
    char str[24]="Mirajul Islam";
    int n,i;
    for(i=0;str[i];i++)
    {
        putchar(str[i]);
        delay(100);
    }
    return 0;
}
