#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stack[100];
int top=-1;
char infix[100];

char prefix[100];


void push(char item)
{
	top++;
	stack[top]=item;
}

char pop()
{
	char temp =stack[top];
	top--;
	return temp;
}

void reverse_infix(char arr[],int size)
{
	int i=size-1;
	int j=0;
	char temp[100];
	while(i>=0 &&j<size)
	{
		temp[j]=arr[i];
		i--;
		j++;
	}
	temp[j]='\0';
	strcpy(infix,temp);

}
char isOperator(char symbol)
{
	if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/')
 		{
			return 1;
		}
	else
	{
		return 0;
	}
}
char precedence(char symbol)
{
	if (symbol=='*'||symbol=='/')
		  {
		  	return 2;
		  }	  	
     else if (symbol=='*'||symbol=='/')
 		  {
		  	return 1;
		  }
	else
	  {
	  	return 0;
	  }		  
	  
}

void infix_prefix( char infix[], char prefix[])
{
	push('@');
	push(')');
	strcat(infix,"(");

	int i,j=0;
	char x,item;
	int len=strlen(infix);
	reverse_infix(infix,len);
	for(i=0;i<len;i++)
	{
		item=infix[i];
		
		if(isdigit(item))
			{
				prefix[j]=item;
				j++;
			}
		else if(item==')')
			{
				push(item);
			}
		else if(item=='(')
			{
				x=pop();
				while(x!=')')
				  {
				  	prefix[j]=x;
				  	j++;
				  	x=pop();
				  }
				  push(x);
			}
			else if(isOperator(item)==1)
				{
					x=pop();
					while(isOperator(x)==1&&precedence(x)>=precedence(item))
					{
						prefix[j]=x;
						j++;
						x=pop();
					}
					push(x);
					push(item);
				}
			else
				{
					printf("\n\n\twrong infix exp\n\n ");
				}
	}
			while(x != '@')
				{
					if(x=='('||x==')')
					 	{
					 		x=pop();
					 	}
					 else
						 {
						 	prefix[j]=x;
						 	j++;
						 	x=pop();
						 }
				}
			
			prefix[j]='\0';
					
	reverse_infix(prefix,strlen(prefix));
	
}
void main()
{
	printf("enter infix exp:-     ");
	gets(infix);

	infix_prefix(infix,prefix);

	printf("\nthe pretfix exp is :-    ");
	puts(infix);
}
