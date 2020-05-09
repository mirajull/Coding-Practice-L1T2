#include <stdio.h>
int main()
{
    int j;
    for(j=1;j<=5;j++){
        printf("\n decimal %d is in binary:",j);
        showbits(j);
    }
}
