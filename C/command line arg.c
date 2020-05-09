#include <stdio.h>
#include <conio.h>
int main(int argc,char*argv[])
{
    int n;
    printf("%d\n",argc);
    for(n=0;n<argc;++n){
        printf("argv[%d] points to %s\n",n,argv[n]);
    }
    getch();
    return 0;
}
