#include<stdio.h>

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
	
	int len,j=0,input,i,temp;
	printf("enter size of array \t");
	scanf("%d",&len);
	int array[len];
	for(j;j<=len-1;j++){
	printf("enter element at position %d\n",j);
	scanf("%d",&input);
	array[j]=input;
	
}
		for(i=1;  i < len;   i++)
	     {
	      	temp=array[i];
	      	
	      	j=i-1;
	     	while(j>=0   && array[j] > temp)
	     	     {	
	     	         array[j+1]  = array[j] ;	     	
	     	 	     j--;   	     	         	  	 
	     	     }//close of while
	             array[j+1]=temp;
	     }
    printf("\n\tsorted array\n");
	print(array,len); //print function call	
}