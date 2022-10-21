#include <stdio.h>
#include <stdlib.h>


void main()
{
int arr[10];
int i,flag=0;
int ele,num,pos;
int choose=10;
int size =sizeof(arr)/sizeof(arr[0]);
printf("Enter numbers for array\n");
for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
while(choose)
{  printf("\nEnter 0 to exit\nEnter 1 to print\nenter 2 to insert\nEnter 3 to delete\nEnter 4 to search:- ");
scanf("%d",&choose);
	switch(choose)
	{
		case 0: 
		{
			exit(0);
			break;
		}
		case 1:
		{
			i=0;
       	while(i<size)
				{
					printf("%d  ",arr[i]);
					i++;
				}
			break;
		}
		
		case 2:
		{
			printf("\nenter number to insert:- ");
			scanf("%d",&ele);
			printf("\nenter position where to insert:- ");
			scanf("%d",&pos);
			if((pos>size)||(pos<0))
			{
				printf("\n\nenter postion does not exist\n\n");
			}
			else{
			size++;
        	for(i=size-1;i>=pos;i--)
         	{
					arr[i]=arr[i-1];
          	}
				arr[pos-1]=ele;
				printf("\n\n\tNumber Inserted\n\n");
			}
			
			break;
		}
		case 3:
		{
			printf("\nenter position where to delete:-");
			scanf("%d",&pos);
			if((pos>size)||(pos<0))
			{
				printf("\n\nenter postion does not exist\n\n");
			}
			else{
		     for(i=pos-1;i<size-1;i++)
				{
					arr[i]=arr[i+1];
				}
			   	size--;
			   	printf("\n\n\tNumber Inserted\n\n");
			}
				break;
		}
		case 4:
		{
			printf("\nenter num to search:- ");
			scanf("%d",&ele);
			for (i=0;i<size;i++)
				{
					if (arr[i]==ele)
					{
						printf("\nnumber found at index %d\n ",i);
						flag=1;
						break;
					}	
					if(flag==0)
					{
						printf("\nNumber not found\n");
					}													
				}
			break;
		}
		
	}

}
}