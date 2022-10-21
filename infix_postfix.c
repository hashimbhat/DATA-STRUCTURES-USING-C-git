#include <stdio.h>
#include <ctype.h> //for isdigit()
#define SIZE 100
char stack[SIZE];
int top=-1;

void push(char item)
{
	top++;
	stack[top]=item;
}

char pop()
{
	char temp;
	temp=stack[top];
	top--;
	return temp;
}

int isOperator(char symbol)
{
	if (symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-'||symbol=='^')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int precedence(char item)
{
	if (item=='^')
	{
		return 3; 
	}
	else if(item=='*' || item=='/')
	{
		return 2;
	}
	else if(item=='+' || item=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void infix_postfix(char infix[], char postfix[])
{
	push('(');                           
	strcat(infix,")"); 
	int i=0;
	int j=0;
	char x;
	char item=infix[i];
	while(item!='\0')// not equal to last item
	{
		if (item=='(')
		{
			push(item);
		}
		
		else if(isdigit(item))
		{
			postfix[j]=item;
			j++;
		}
		
		else if(isOperator(item)==1)
		{
			x=pop();
							while(isOperator(x)==1&&precedence(x)>=precedence(item))
			{
			    postfix[j]=x;
			    j++;
			    x=pop();	
			}
			push(x);//for termination of while loop we poped extra item
			push(item);
		}
		
		else if(item==')')
		{
			x=pop();
			while(x != '(')
			{
				 postfix[j]=x;
			    j++;
			    x=pop();	
		    } 
		}
		
		else
		{
			printf("wrong infix exp");
		}
		
		i++;
		item=infix[i];
	} //close of while 
	postfix[j]='\0'; 
}
void main(){
	char infix[100];
	char postfix[100];	

	printf("enter infix exp:-     ");
	gets(infix);

	infix_postfix(infix,postfix);

	printf("the postfix exp is :-    ");
	puts(postfix);
	
}