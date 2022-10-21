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

	int i=0,j,minindex,temp,len;
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
	     	minindex=i;
	     	for(j=0  ;   j<len ; j++){
	     	     		if(    array[j]    < array[minindex]){ 
	     	     	         minindex=j;
	     	     	   }
	     	     	   else{
	     	     	   	 temp=array[minindex];
	      	        array[minindex]=array[i];
	      	        array[i]=temp; 
						 }
	     	 
	     	     }
	     
	     	   
	     }
	          printf("\n\tsorted array\n");
	print(array,len); //print function call	
}
