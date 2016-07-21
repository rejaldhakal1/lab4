//WAP a C program to find if a mathematical expression is valid or not

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#define max 50
typedef struct{
int top;
int items[max];
}stack;
char check(char);
void push(stack*s,int x);
int pop(stack*s);
int main()
{
	char exp[100],a,k;
	int i,valid=1;
	stack s;		
	s.top = -1;	
	printf("\nEnter an infix expression ");
	gets(exp);	
	for(i=0; exp[i] != '\0'; i++)
	{
		if( exp[i]=='(' || exp[i] =='[' || exp[i] == '{' )
		{
			push(&s,exp[i]);
			break;
		}
		if ( exp[i]==')' || exp[i] ==']' || exp[i] == '}' )
		{
			if(s.top==-1)
			{
				valid=0;
			}
			else{
			k=check(exp[i]);	
			a=pop(&s);
			if(a!=k)
			{
				valid=0;
			}
			break;
		}
		}
	}
	if (!(s.top==-1))
	{
		valid=0;
	}
			
			if(valid==0)
			{
				printf("The expression is invalid");
			}
			else
			{
				printf("The expression is valid");
			}

}
void push(stack*s,int x)
{
	if((s->top)>(max-1))
	{
	printf("Stack Overflow");
	exit(1);
	}
	else{
		s->items[++(s->top)]=x;
	}
}
int pop(stack*s)
{
	if((s->top)<0)
	{
	printf("Stack Underflow");
	exit(1);
}
else
{
	return (s->items[(s->top)--]);
}
}
char check(char a)
{
	if(a==')')
	{
		return '(';
	}
	else if (a=='}')
	{
		return '{';
	}
	else
	{
		return '[';
	}
}
