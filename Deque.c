#include <stdio.h>
#include <stdlib.h> // for exit()
#define SIZE 5
int Queue[SIZE];
int rear= -1;
 int front=-1;


void EnqueueFront(int data)
{
		
	if ((front==rear+1) || (front==0 && rear==SIZE-1))
		{
			printf("\n\n\tOver_flow\n\n");
		}
		else if(front==-1 && rear == -1)
			 {
			 	front=rear=0;
			 	Queue[front]=data;
			 	printf("\n\n\tElement EnQueued at Front :- %d\n\n",Queue[front]);
			 }
		else if(front ==0)
			{
				front=SIZE-1;				
				Queue[front]=data;
				printf("\n\n\tElement EnQueued at Front :- %d\n\n",Queue[front]);
			
			}

		else
			{
				front--;
				Queue[front]=data;
				printf("\n\n\tElement EnQueued at Front :- %d\n\n",Queue[front]);
			}
     		
	    
	  
}

void EnqueueRear(int data)
{
	if ((front==rear+1)||(front==0 && rear==SIZE-1))
		{
			printf("\n\n\tOver_flow\n\n");
		}
		else if(front==-1 && rear == -1)
			 {
			 	front=rear=0;
			 	Queue[rear]=data;
			 	printf("\n\n\tElement EnQueued at Rear :- %d\n\n",Queue[rear]);
			 }
		else if(rear ==SIZE-1)
			{
				rear=0;				
				Queue[rear]=data;
				printf("\n\n\tElement EnQueued at Rear :- %d\n\n",Queue[rear]);
			
			}

		else
			{
				rear++;
				Queue[rear]=data;
				printf("\n\n\tElement EnQueued at Rear :- %d\n\n",Queue[rear]);
			}  	
		    
  	  
}

void DeQueueFront()
{
	if (rear==-1 && front==-1)
		{
			
			printf("\n\n\tUnder_Flow\n\n");
		}
		
	else if (front==rear)
		{
			front=rear=-1;
			printf("\n\n\tElement deleted\n\n");
		}
	else if(front == SIZE-1)
  	{
  		front=0;
  		printf("\n\n\tElement deleted\n\n");
 	}
 	else
 		{
 			
 			front++;
 			printf("\n\n\tElement deleted\n\n");
 			
 		}
 		
 	
}

void DeQueueRear()
{
	if (rear==-1 && front==-1)
		{
			
			printf("\n\n\tUnder_Flow\n\n");
		}
		
	else if (front==rear)
		{
			front=rear=-1;
			printf("\n\n\tElement deleted\n\n");
		}
	else if(rear == 0)
  	{
  		rear=SIZE-1;
  		printf("\n\n\tElement deleted\n\n");
 	}
 	else
 		{
 			
 			rear--;
 			printf("\n\n\tElement deleted\n\n");
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
	  	while(i!=rear)
	  	{
	 	 	printf("%d   ",Queue[i]);
	 	 	i=(i+1)%SIZE;
	  	}
	  	printf("%d   ",Queue[rear]);
	  	printf("\n\n");
	  }
}

void main(){
	int choose=10;
	int ele;
	while(choose!=0)
		{
			printf("\nEnter 1 to Enque at FRONT\nEnter 2 to Enque at REAR\nEnter 3 to DeEnque at FRONT\nEnter 4 to DeEnque at REAR\nEnter 5 to peek Front and Rear element\nEnter 6 to Display all Elements\nEnter 0 to Exit:- ");
			scanf("%d",&choose);
			switch(choose)
				{
				
					case 1:
							{
								printf("\nEnter Data to EnQueue:- ");
								scanf("%d",&ele);
								EnqueueFront(ele);
								break;
							}
					case 2:
							{
						  	  printf("\nEnter Data to EnQueue:- ");
								scanf("%d",&ele);
								EnqueueRear(ele);
								break;
							}
					case 3:
							{ 
								DeQueueFront();
								break;
							}
					case 4:
							{
								DeQueueRear();
								break;
							}
					case 5:
							{
								peek();
								break;
							}
					case 6:
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