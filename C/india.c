#include <stdio.h>
#include<string.h>

#define MAX 10

void pushsym(char);

char popsym();

void validate();

int top = -1;
int valid = 1;
char stacksym[10];

void main()
{
memset(stacksym, '\0',sizeof(stacksym));
validate();
if(valid == 1)
printf("Given Expression is Valid\n");
else
printf("INVALID EXPRESSION\n");

}

void validate()
{
char *expr = "[()]{}{[()()]()}";
int len = strlen(expr);
int i;
char ps;
char popc;
for(i = 0;expr[i]!='\0'; i++)
{
if(expr[i]=='{' || expr[i] == '(' || expr[i]=='[')
{
ps = expr[i];
pushsym(ps);
if(i == len-1)
valid = 0;
}
if(expr[i] == ')' || expr[i] == ']' || expr[i] == '}')
{
if(top == -1)
{

// Dont POP the Element
}
else
{
popc = popsym();
}
if(popc == '(' && (expr[i] == '}' || expr[i] == ']'))
{
valid = 0;
}
else if (popc =='[' && (expr[i] == ')' || expr[i] == '}'))
{
valid = 0;
}
else if (popc =='{' && (expr[i] == ')' || expr[i] == ']'))
{
valid = 0;
}
}
else
{
// do nothing
}
}

}

void pushsym (char ch)
{
top = top+1;
if(top == MAX)
{
printf("Sorry, Stack is Full\n");
}

stacksym[top] = ch;
}

char popsym()
{
if(top == -1)
{
printf("sorry , stack is underflow\n");
}
char temp = stacksym[top];
top = top -1;
return temp;
}
