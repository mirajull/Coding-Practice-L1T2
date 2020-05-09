#include<stdio.h>
#include<conio.h>
int main()
{
    char*name[]={"raisul","mirajul","abba","amma"};
    char*id[]={"3205","3206","3211","3212"};
    float cgpa[]={3.85,3.34,3.56,2.34};

    char*getname;
    char*getid;
    float getcgpa;
    int i;

    FILE*fp;
    fp=fopen("c:\\learing.ncg","w");
    for(i=0;i<4;i++){
        fprintf(fp,"%-10s %-10s %1.2f\n",name[i],id[i],cgpa[i]);
    }
    fclose(fp);
    fp=fopen("c:\\learing.ncg","r");
    while(fscanf(fp,"%s %s %f",getname,getid,&getcgpa)!=EOF){
        printf("%-10s %-10s %1.2f\n",getname,getid,getcgpa);
    }
    //fclose(fp);
    return 0;
}
