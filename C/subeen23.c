#include <stdio.h>
int main()
{
    int n=5,i;
    i=1;
    for(;;){
        printf("%d into %d= %d\n",n,i,n*i);
        i=i+1;
        if (i>10){
            break;
        }
    }
    return 0;
}
