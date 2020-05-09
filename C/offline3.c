#include <stdio.h>
#define SIZE 50
int tos=-1;
char stack[SIZE];

#define TRUE 1
#define FALSE 0
void push(char p){
    tos++;
    stack[tos]=p;
}
char pop(){
    char j;
    j=stack[tos];
    stack[tos]='\0';
    tos--;
    return j;
}
char isEmpty(){
    if(tos==-1){
        return TRUE;
    }
    return FALSE;
}
int main()
{
    int f=0,q,z=0;
    char ara[SIZE];
    gets(ara);
    while(ara[z]){
        z++;
    }
    for(q=0;q<z;q++){
        if(ara[q]=='('||ara[q]=='{'||ara[q]=='['){
            push(ara[q]);
        }
        else if(ara[q]){
            if(ara[q]==')'&&pop() == '('){
                f++;
            }
            else if(ara[q]=='}'&&pop() =='{'){
                f++;
            }
            else if(ara[q]==']'&&pop() =='['){
                f++;
            }
            if(f==0){
                printf("error at position %d",q+1);
                break;
            }
            if(q>=z-1&&isEmpty()){
                printf("MATCHED");
            }
        }
        f=0;
    }
    if(!isEmpty()&&q>=z-1){
        printf("error at position %d",q+1);
    }
    return 0;
}
