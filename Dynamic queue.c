 #include<stdio.h>
 #include<stdlib.h>
 #define MAX	4
 struct queue{
 	int array[MAX];
int front,rear; 	
 	
 }newqueue;
int main() {
		
   
    newqueue.front=-1;
     newqueue.rear=-1;
     int input=10;
     int element;
   
    while(input != 0)
    {
         printf("\nEnter 1 to enque\t Enter 2 to deque\t And 0 to exit\n");
    scanf("%d",&input);
        if(input == 1) { 
            if (newqueue.rear== MAX- 1){
                printf("Queue is full\n");
                
            }
        else { 
        
            printf("Enter an element to enque\t");
            scanf("%d",&element);
            
            newqueue.array[newqueue.rear]=element;
            
            newqueue.rear++;
        }
           
        }
    
      
   
        if(input == 2) {
            if (newqueue.front==newqueue.rear){
                printf("\nQueue is empty");
                
            }
            else {
          
 printf("\nDeque element is %d\n", newqueue.array[newqueue.front]); 
           
          newqueue.front++;  		 
  
             
            }
            
            
        }
        
        
        
    }
    
}
