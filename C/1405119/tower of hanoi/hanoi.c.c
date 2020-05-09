#include <stdio.h>
int n;
int a[10],b[10],c[10];

int prothom, ditiyo,trittiyo ;

void print_array(int p,int s,int t)
{
        printf("{ ");
        int i;
        for(i=0;i<p;i++)
        {
            printf("%d ",a[i]);
        }
        for(;i<n;i++)
        {
            printf("  ");
        }
        printf("} ");
        printf("{ ");
        for(i=0;i<s;i++)
        {
                printf("%d ",b[i]);
        }
        for(;i<n;i++)
        {
                printf("  ");
        }
        printf("} ");
        printf("{ ");
        for(i=0;i<t;i++)
        {
                printf("%d ",c[i]);
        }
        for(;i<n;i++)
        {
                printf("  ");
        }
        printf("} ");
        printf("\n");
}


void hanoi(int n1,int sou,int dst,int med)
{
        if(n1==1)
        {
                if(sou ==1 &&dst==2 )
                {


                                b[ditiyo]=a[prothom-1];
                                prothom--;
                                ditiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }

                else if(sou==1 &&dst==3)
                {
                                c[trittiyo]=a[prothom-1];
                                prothom--;
                                trittiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                if(sou ==2 &&dst==1 )
                {
                                a[prothom]=b[ditiyo-1];
                                ditiyo--;
                                prothom++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                else if(dst==3 && sou==2)
                {
                                c[trittiyo]=b[ditiyo-1];
                                ditiyo--;
                                trittiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                if(sou ==3 && dst==1)
                {
                                a[prothom]=c[trittiyo-1];
                                trittiyo--;
                                prothom++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                        else if(dst==2&&sou==3)
                        {
                                b[ditiyo]=c[trittiyo-1];
                                trittiyo--;
                                ditiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                        }

                //printf("Move %d to %d\n",sou,dst);
                return ;
        }
        hanoi(n1-1,sou,med,dst);
        if(sou ==1 &&dst==2 )
                {


                                b[ditiyo]=a[prothom-1];
                                prothom--;
                                ditiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }

                else if(sou==1 &&dst==3)
                {
                                c[trittiyo]=a[prothom-1];
                                prothom--;
                                trittiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                if(sou ==2 &&dst==1 )
                {
                                a[prothom]=b[ditiyo-1];
                                ditiyo--;
                                prothom++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                else if(dst==3 && sou==2)
                {
                                c[trittiyo]=b[ditiyo-1];
                                ditiyo--;
                                trittiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                if(sou ==3 && dst==1)
                {
                                a[prothom]=c[trittiyo-1];
                                trittiyo--;
                                prothom++;
                                print_array(prothom,ditiyo,trittiyo);
                }
                else if(dst==2&&sou==3)
                {
                                b[ditiyo]=c[trittiyo-1];
                                trittiyo--;
                                ditiyo++;
                                print_array(prothom,ditiyo,trittiyo);
                }
        hanoi(n1-1,med,dst,sou);
}

int main(void)
{
        int i;
        scanf("%d",&n);
        prothom=n ;
        for(i=0;i<n;i++)
                a[i]=n-i;
        print_array(n,0,0);
        hanoi(n,1,3,2);
}
