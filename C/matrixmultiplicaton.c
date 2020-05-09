#include<stdio.h>
int main()
{
    int sum,i,j,k,r1,r2,c1,c2;
    int mat1[10][10],mat2[10][10],mat3[10][10];
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nthen?\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\nthen?\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            sum=0;
            for(k=0;k<c1 ;k++){
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mat3[i][j]=sum;
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
