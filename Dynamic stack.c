#include<stdio.h>
#include<stdlib.h>
#define MAX 3
struct stack{
	int stk[MAX];
	int top;
};
int main(){
	int  hold, input=10;
	struct stack newstk;
	newstk.top=-1;
	while(input != 0){
		printf("Enter 1 to push \n Enter 2 to pop\n Enter 0 to exit\n");
		scanf("%d",&input);
		if(input==1){
			if(newstk.top==MAX-1){
				printf("stack overflow stack is full\n");
			}
			else{ 
			    newstk.top++;
				printf("enter value to push in stack\t");
				scanf("%d",&hold);
				newstk.stk[newstk.top]=hold;
				printf("pushed element is \t%d\n",hold);
			}				
				
			}
			else if(input==2){
				if(newstk.top==-1){
					printf("stack underflow stack is empty\n");
				}
				else{
					hold=newstk.stk[newstk.top];
					
					printf("popped element is \t%d\n",hold);
					newstk.top--;
					}
				
				
			}
			else if(input==0){
				break;
			}
			else {
				printf("enter valid input\n");
			}
			
			
			
			
		}
		
		
		
		
		
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

