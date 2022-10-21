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
	int arr[]={4,6,3,6,8,9,88,99,44,1,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int s,i,j,temp;
	print(arr,size);//print function call for unsorted array
	//bubble sort
	for(i=0;  i <size-1;   i++)
	     {
	     	s=0;
	     	for(j=0  ;   j<size-i-1 ; j++)
	     	     {
	     	     	if(    arr[j]    >   arr[j+1])
	     	     	   { 
	     	     	        temp=arr[j];
	     	     	        arr[j]=arr[j+1];
	     	     	        arr[j+1]=temp;
	     	     	        s=1;
	     	     	   }
	     	 
	     	     }
	     
	     	     if (s==0) //if array is already sorted
	     	       { 
	     	           break;
	     	       }
	     }
	          printf("\n\tsorted array\n");
	print(arr,size); //print function call	
}