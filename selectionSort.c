#include <stdio.h>
void print(int arr[], int size)
    {
    	int i;
    	for(i=0;i<=size-1;i++)
    	    {
    	    	printf("%d  ",arr[i]);
    	    }
    }

void main()
{
	int arr[]={4,6,3,99,8,9,88,44,1,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int min,i,j,temp;
	print(arr,size);//print function call for unsorted array

	
    	//selection sort
	for(i=0;  i < size-1;   i++)
	     {
	      	min=i;
	     	for( j=i+1 ;   j < size; j++)
	     	     {
	     	     	if(    arr[j]    < arr[min])
	     	     	   { 
	     	     	         min=j;
	     	     	   }
	     	     } //close of     j    forloop
	     	  
	         //swap arr[i] with arr[min]
	     	         temp=arr[min];
	      	        arr[min]=arr[i];
	      	        arr[i]=temp;     	     	         	  	 
	     	     }//close of     i   forloop
	     
    printf("\n\tsorted array\n");
	print(arr,size); //print function call	
}