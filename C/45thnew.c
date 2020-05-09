#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,f[100],ba[100],j,k,l,m,count=0,i,len1,len2;
    scanf("%d %d %d",&n,&a,&b);
    for(i=0,j=a;j<n;j++,i++){
        f[i]=j;
    }
    for(k=0,j=n-b-1;j<n;j++,k++){
        ba[k]=j;
    }
    for(l=0;l<i;l++){
        for(m=0;m<k;m++){
             if(f[l]==ba[m]) count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
