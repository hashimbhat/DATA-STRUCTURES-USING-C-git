#include<stdio.h>
#include<stdlib.h>



int main(){
	int size,i=0,input,flag=0;
	printf("enter array size\t");
	scanf("%d",&size);
	int beg=0,end=size-1;
	int midindex=beg + (end-beg)/2;
	
	int array[size];
	
	for(i;i<=size-1;i++){
		printf("enter value at position %d \n ",i);
		scanf("%d",&array[i]);
		
		}
	
printf("enter element to serch:\t ");
scanf("%d",&input);

	while(beg<=end){
		if(array[midindex]==input){
			midindex=beg + (end-beg)/2;
			printf("\n element is found at index \t%d",midindex);
            flag=1;
            break;
		}
		 if(array[midindex]<=input){
			beg=midindex+1;
			}
		else {
			end = midindex -1;
		}
				
}	
	
	if(flag==0){
			printf("element not found");
            
		}
}
