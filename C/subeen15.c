#include <stdio.h>
int main()
{
    char a;
    printf("enter the alphabet: ");
    scanf("%c", &a);
    if(a>='a' && a<='z'){
        printf("the alphabet is of lower case");
    }
    else{
        printf("the alphabet is of higher case");
    }
    return 0;
}
