#include<stdio.h>
int main()
{
     int i,j;
     printf("\n\n\n\n");
     for(i=1;i<=5;i++)
     {
          printf("\t\t\t");
          for(j=1;j<=1;j++)
          {
               printf("@");
          }
          for(j=1;j<=2;j++)
          {
               if(i==3)
               {
                    printf("@");
               }
               else
               {
                    printf(" ");
               }
          }
          for(j=1;j<=1;j++)
          {
               printf("@");
          }


          for(j=1;j<=5-i;j++)
          {
               printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               printf("@");
          }
          for(j=1;j<=2*i-3;j++)
          {
               if(i==3)
               {
                    printf("@");
               }
               else printf(" ");
          }
          if(j!=1)
          {
               for(j=1;j<=1;j++)
               {
                    printf("@");
               }
          }
          for(j=1;j<=5-i;j++)
          {
               printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               printf("@");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1 || i==3) printf("@");
               else if(i==2) printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1) printf(" ");
               else if(i==2) printf("@");
               else if(i==3) printf(" ");
               else printf("  ");
          }
          //p
          for(j=1;j<=1;j++)
          {
               printf(" ");
               printf("@");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1) printf("@");
               else if(i==2) printf(" ");
               else if(i==3) printf("@");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1) printf(" ");
               else if(i==2) printf("@");
               else if(i==3) printf(" ");
               else printf("  ");
          }
          //y
          for(j=1;j<=1;j++)
          {
               printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1) printf("@ ");
               else if(i==2) printf(" @");
               else printf("  ");
          }
          for(j=1;j<=3-i;j++)
          {
               printf(" ");
          }
          printf("@");
          printf("\n");
     }
     printf("\n\n\n\n\n");









     for(i=1;i<=5;i++)
     {
          //b
          printf("\t\t");
          for(j=1;j<=1;j++)
          {
               printf("&");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1 || i==3 || i==5) printf("&");
               else printf(" ");
               //else if(i==3) printf("*");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1 || i==3 || i==5) printf(" ");
               else printf("&");
          }
          //i
          for(j=1;j<=1;j++)
          {
                printf(" & ");
          }
          //r
          for(j=1;j<=1;j++)
          {
               printf("&");
          }

          for(j=1;j<=1;j++)
          {
               if(i==1 || i==3 ) printf("&  ");
               else if(i==2 || i==4) printf(" & ");
               else if(i==5) printf("  &");
          }
          /*for(j=1;j<=1;j++)
          {
               if(i==1 || i==3 || i==5) printf(" ");
               else printf("*");
          }
          /*printf(" ");
          for(j=2;j<=3;j++)
          {
               if(i==1) printf("*");
               else printf("  ");
          }
          for(j=1;j<=1;j++)
          {
               printf("*");
          }*/
          //t
          for(j=1;j<=1;j++)
          {
               printf(" ");
               //else printf("");
          }
          //printf(" ");
          for(j=1;j<=1;j++)
          {
               if(i==1) printf("&&");
               else printf("  ");
          }
          printf("&");
          for(j=1;j<=1;j++)
          {
               if(i==1) printf("&&");
               else printf("  ");
          }
          //h
          for(j=1;j<=1;j++)
          {
               printf("&");
          }
          for(j=1;j<=2;j++)
          {
               if(i==3)
               {
                    printf("&");
               }
               else
               {
                    printf(" ");
               }
          }
          for(j=1;j<=1;j++)
          {
               printf("&");
          }
          printf(" &");
          //d
          for(j=1;j<=1;j++)
          {
               if(i==1 || i==5) printf("&  ");
               else if(i==2 || i==4) printf(" & ");
               else printf("  &");
          }
          //printf("_");
          //a
          for(j=1;j<=5-i;j++)
          {
               printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               printf("&");
          }
          for(j=1;j<=2*i-3;j++)
          {
               if(i==3)
               {
                    printf("&");
               }
               else printf(" ");
          }
          if(j!=1)
          {
               for(j=1;j<=1;j++)
               {
                    printf("&");
               }
          }
          for(j=1;j<=5-i;j++)
          {
               printf(" ");
          }
          //y
          for(j=1;j<=1;j++)
          {
               printf(" ");
          }
          for(j=1;j<=1;j++)
          {
               if(i==1) printf("& ");
               else if(i==2) printf(" &");
               else printf("  ");
          }
          for(j=1;j<=3-i;j++)
          {
               printf(" ");
          }
          printf("&");
          printf("\n");
     }
     printf("\n\n\n\n\n");
     printf("\t\t\t   ___   ___\n\n");
     printf("\t\t\t    @     @\n");
     printf("\t\t\t       L\n\n ");
     printf("\t\t\t     .___.\n");
     printf("\t\t\t      \\_/\n");
     printf("\n");
     return 0;
}
