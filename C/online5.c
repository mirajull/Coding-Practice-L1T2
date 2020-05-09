#include<stdio.h>
int main()
{
     int i,j,k,n;
     scanf("%d",&n);
     for(i=1;i<=n/2;i++)
     {
          for(j=1;j<=n;j++)
          {
               printf(" ");
          }
          for(k=1;k<=i;k++)
          {
               printf("*");
          }
          printf("\n");
     }
     for(i=1;i<=n/2;i++)
     {
          for(j=1;j<=n;j++)
          {
               printf("*");
          }
          for(k=1;k<=i+n/2;k++)
          {
               printf("*");
          }
          printf("\n");
     }
     for(i=1;i<=(n/2)-1;i++)
     {
          for(j=1;j<=n;j++)
          {
               printf("*");
          }
          for(k=1;k<=n-i;k++)
          {
               printf("*");
          }
          printf("\n");
     }
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
          {
               printf(" ");
          }
          for(k=1;k<=(n/2)-i+1;k++)
          {
               printf("*");
          }
          printf("\n");
     }
     return 0;

}

