#include <stdio.h>
int main()
{
    FILE*fp;
    char ch;
    fp=fopen("mirajul.txt","w");
    while((ch=getchar())!= EOF )
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("mirajul.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);

    return 0;

}
