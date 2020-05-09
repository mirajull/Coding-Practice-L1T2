#include <stdio.h>
int main()
{
    int x=0,y=0,i,j,g,f=0,k;
    char s,str[100][100];
    for(i=0;i<8;i++){
        //for(j=0;j<8;j++){
            scanf("%s",str[i]);
        //}
        //printf("\n");
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(str[i][j]=='B'){
                /*if(i==0){
                    printf("%d %d\n",i,j);
                }*/
                if(str[i+1][j]!='W'||str[i+1][j]!='B')
                    x=i+1;
            }
            if(str[i][j]=='W'){
                if(str[i-1][j]=='B'||str[i-1][j]=='W'){
                    //printf("YES");
                    continue;
                }
                else if(f==0){
                    y=9-(i+1);
                    f++;
                    //printf("%d %d\n",i,j);
                }
            }
        }
    }
    if(x<=y){
        printf("A");
    }
    else{
        printf("B");
    }
    printf("\n");
   printf("%d %d",x,y);
    return 0;
}

