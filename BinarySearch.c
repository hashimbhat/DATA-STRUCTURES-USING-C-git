#include <stdio.h>
void print(int arr[], int size)
    {
    	int i;
    	for(i=0;i<size;i++)
    	    {
    	    	printf("%d  ",arr[i]);
    	    }
    }
	        	         

void main() //binary search
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};

	int size=sizeof(arr)/sizeof(arr[0]);

	int begin = 0; //starting point of array
    int end= size-1;//end point of array
    
    int mid;//middle point of array

	 int ele;
	 int flag=0;
	 print(arr,size);
	 printf("\n");
	 printf("enter data to serach:- ");
	 scanf("%d",&ele);
//sorted array required
   
	      while(begin <= end)
	      {
	     	 mid=begin +(end-begin)/2;
	      	if(arr[mid]==ele)
	      	   {
	      	   	printf("element found at loc %d ",mid);
	      	   	flag=1;
	      	   	break;
	      	   }
	         if(arr[mid] < ele)
	      	     { 
	      	          begin = mid+1;
	      	     }
	         else
	              {
	              	end=mid-1;
	              }	              
	     }//close of while
	      
	if(flag ==0)     //element not found   
	  {
	  	printf("element not found");
	  }
}
