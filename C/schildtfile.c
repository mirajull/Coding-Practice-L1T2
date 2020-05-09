#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    FILE*fp;
    double ld;
    int d;
    char str[80];
    if(argc!=2)
    {
        printf("specify the file name\n");
        exit(1);
    }
    if((fp=fopen(argv[1],"w"))==NULL)
    {
        printf("cannot open file\n");
        exit(1);
    }
    fprintf(fp,"%f %d %s",3.34,1995,"mirajul");
    fclose(fp);
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("cannot open file\n");
        exit(1);
    }
    fscanf(fp,"%lf %d %s",&ld,&d,str);
    printf("%f %d %s",ld,d,str);
    fclose(fp);
    return 0;
}
