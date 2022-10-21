 #include<stdio.h>
 #include<stdlib.h>
int main() {
		int n;
	printf("enter no. of elements you want in queue\n");
	scanf("%d",&n);
    int queue[n];
    int front=-1, rear=-1,size=n,input=10,element;
   
    while(input != 0)
    {
         printf("Enter 1 to enque\n Enter 2 to deque\n And 0 to exit\n");
    scanf("%d",&input);
        if(input == 1) { 
            if (rear==size-1){
                printf("Queue is full\n");
                
            }
        else { 
        
            printf("Enter an element to enque\t");
            scanf("%d",&element);
            rear++;
            queue[rear]=element;
            
            
        }
        }
       front=0;
      
   
        if(input == 2) {
            if (front==rear){
                printf("Queue is empty");
                break;
            }
            else {
                printf("Deque element is %d\n", queue[front]); 
          queue[front]=0;
                front++;
                element= queue[front];
                
            }
            
            
        }
        
        
        
    }
    
}
