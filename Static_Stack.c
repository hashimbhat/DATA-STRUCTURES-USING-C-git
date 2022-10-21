#include <stdio.h>

//Compiler version gcc  6.3.0




int main() {
	int n;
		printf("enter size of stack\n ");
		scanf("%d",&n);
  int stack [n];

int top=-1, input=10,el,size=n; 
while(input!=0)
 {

printf("PRESS 1 TO PUSH AN ELEMENT\n");
printf("PRESS 2 TO POP AN ELEMENT\n");
printf("PRESS 0 TO EXIT\n"); 
scanf("%d",&input);

//check the overflow (input - 1)


if (input==1)
{
   if (top==size-1)
{
printf("Stack is full.\n");
}
else
{
printf("You want to push an element in stack.\n");

printf("Enter element to insert in stack:\n");

scanf("%d",&el);

top++; 
stack[top]=el;
}
}
else if (input == 2)
{
  //check the under flow
 if(top==-1)
 {

printf("Stack is empty\n");
}
else {

printf("Popped element is %d\n", stack [top]); 
stack [top]=0; 
top--;
}
}
}
}
