#include <stdio.h>
int main()
{
    char a;
    printf("enter: ");
    scanf("%c", &a);
    if(a=='a'||a=='e'||a=='u'||a=='i'||a=='o'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;
}
