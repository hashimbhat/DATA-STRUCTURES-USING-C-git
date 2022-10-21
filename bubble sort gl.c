#include <stdio.h>

void print(int arr[], int len)
    {
    	int i;
    	for(i=0;i<=len-1;i++)
    	    {
    	    	printf("%d \t ",arr[i]);
    	    }
    }
void main()
{

	int i=0,j,flag=0,temp,len;
	printf("enter array size\t");
	scanf("%d",&len);
	int array[len];
	
	for(i;i<=len-1;i++){
		printf("enter value at position %d \n ",i);
		scanf("%d",&array[i]);
		
		}
printf("unsorted array\n");
	
	print(array,len);//print function call for unsorted array
	//bubble sort
	for(i=0;  i <len-1;   i++)
	     {
	     	flag=0;
	     	for(j=0  ;   j<len-i-1 ; j++)
	     	     {
	     	     	if(    array[j]    >   array[j+1])
	     	     	   { 
	     	     	        temp=array[j];
	     	     	        array[j]=array[j+1];
	     	     	        array[j+1]=temp;
	     	     	        flag=1;
	     	     	   }
	     	 
	     	     }
	     
	     	     if (flag==0) //if array is already sorted
	     	       { 
	     	           break;
	     	       }
	     }
	          printf("\n\tsorted array\n");
	print(array,len); //print function call	
}
