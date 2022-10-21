#include <stdio.h>
#include <stdlib.h> // for exit()
#define SIZE 10
int Queue[SIZE];
int rear= -1;
 int front=-1;


void Enqueue(int data)
{
	if (rear==SIZE-1)
		{
			printf("\n\n\tOver_flow\n\n");
		}
  else
  {
	if(rear == -1 && front == -1)
	  {
	  	front=0;
	  }
	 	rear++;
	    Queue[rear]=data;
	    printf("\n\n\tElement EnQueued :- %d\n\n",Queue[rear]);
  }
	  
}
void DeQueue()
{
	if (rear==-1)
		{
			front=-1;
			printf("\n\n\tUnder_Flow\n\n");
		}
	else
		{
			Queue[rear]=0;
			rear--;
		}
}
void peek()
{
	if(rear == -1 && front == -1)
	  {
	  	printf("\n\n\tQueue does not exist\n\n");
	  }
	  else
	  {
	  	printf("\n\nElement at front is :- %d\n",Queue[front]);
	  	printf("Element at rear is :- %d\n\n",Queue[rear]);
	  }
}

void display()
{
	int i=front;
	if(rear == -1 && front == -1)
	  {
	  	printf("\n\n\tQueue does not exist\n\n");
	  }
	  else
	  { 
	  printf("\n\nElement are:- ");
	  	while(i<=rear)
	  	{
	 	 	printf("%d   ",Queue[i]);
	 	 	i++;
	  	}
	  	printf("\n\n");
	  }
}

void main(){
	int choose=10;
	int ele;
	while(choose!=0)
		{
			printf("Enter 1 to Enque\nEnter 2 to DeQueue\nEnter 3 to peek Front and Rear element\nEnter 4 to Display all Elements\nEnter 0 to Exit:- ");
			scanf("%d",&choose);
			switch(choose)
				{
				
					case 1:
							{
								printf("Enter Data to EnQueue:- ");
								scanf("%d",&ele);
								Enqueue(ele);
								break;
							}
					case 2:
							{
								DeQueue();
								break;
							}
					case 3:
							{
								peek();
								break;
							}
					case 4:
							{
								display();
								break;
							}
					case 0:
							{
								exit(0);
								break;
							}
					default:
							{
								printf("\n\n\tWrong Input\n\n");
							}
				}//close of switch
			
		}//cloee of while

	
}