#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int arr[], int begin ,int end)
{
	int pivot=arr[begin];
	int i=begin+1;
	int j=end;
	int temp;
	
do{	
	while (arr[i]<=pivot)
	   {
	   	i++;
	   
	   }
	   while(arr[j]>pivot)
	   {
	   	j--;
	   }
	   if (i<j)
	   {
	   	temp=arr[i];
	   	arr[i]=arr[j];
	   	arr[j]=temp;
	   }
	}while(i<j);   	
	
	temp=arr[begin];
	arr[begin]=arr[j];
	arr[j]=temp;
	
	return j;
}

void quickSort(int arr[] ,int begin ,int end)
  {
  	int partition_index;
  	if (begin < end)
  	  {  	  	
  	      partition_index=partition(arr,begin,end);
  	  	quickSort(arr,begin,partition_index-1);
  	  	quickSort(arr,partition_index+1,end);
  	  
  	  }	
  }


void main()
{
    	int arr[10]={4,6,3,99,8,9,88,44,1,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	printArray(arr,size);//print function call for unsorted array

	
    	//merge sort
    quickSort(arr,0,size-1);
     printf("\n");
	printArray(arr,size); //print ;function call	
}