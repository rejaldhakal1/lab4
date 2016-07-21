//WAP to evaluate a postfix expression

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAXI 50
int stack[MAXI];
char post[MAXI];
int top=-1;
void pushstack(int temp);
void calculator(char cal);
void main()
{
 int i;
 printf("Insert a postfix notation :: ");
 gets(post);
 for(i=0;i<strlen(post);i++) 
 {
  if(post[i]='0' && post[i]<='9')
  {
   pushstack(i);
  }
  if(post[i]=='+' || post[i]=='-' || post[i]=='*' || 
  post[i]=='/' || post[i]=='^')
  {
   calculator(post[i]);
  }
 }
 printf("\nResult :: %d",stack[top]);
 getch();
}

void pushstack(int tmp)
{
 top++;
 stack[top]=(int)(post[tmp]-48);
}

void calculator(char c)
{
 int a,b,ans;
 a=stack[top];
 stack[top]='\0';
 top--;
 b=stack[top];
 stack[top]='\0';
 top--;
 
 switch(c)
 {
  case '+':
  ans=a+b;
  break;
  case '-':
  ans=a-b;
  break;
  case '*':
  ans=a*b;
  break;
  case '/':
  ans=a/b;
  break;
  case '^':
  ans=a^b;
  break;
  default:
  ans=0;
 }
 
 top++;
 stack[top]=ans;
}

