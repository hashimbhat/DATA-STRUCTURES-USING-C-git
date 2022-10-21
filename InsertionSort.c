#include <stdio.h>
void print(int arr[], int size)
    {
    	int i;
    	for(i=0;i<size;i++)
    	    {
    	    	printf("%d  ",arr[i]);
    	    }
    }

void main()
{
	int arr[]={4,6,3,99,8,9,88,44,1,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key,i,j,temp;
	print(arr,size);//print function call for unsorted array

	
    	//insertion sort
	for(i=1;  i < size;   i++)
	     {
	      	key=arr[i];
	      	j=i-1;
	     	while(j>=0   && arr[j] > key)
	     	     {	
	     	         arr[j+1]  = arr[j] ;	     	
	     	 	     j--;   	     	         	  	 
	     	     }//close of while
	             arr[j+1]=key;
	     }
    printf("\n\tsorted array\n");
	print(arr,size); //print function call	
}