#include<stdio.h>
#include<stdlib.h>
struct bntr{
	int data;
	struct bntr *left,*right;
}*temp,*root=NULL,*newnode;
void main(){
		int n,i;
		printf("enter no. of nodes to binary tree\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			newnode=(struct bntr*)malloc(sizeof(struct bntr));
			printf("enter data to node\n");
			scanf("%d",&newnode->data);
		
			if(root== NULL){
				root=newnode;
				
			} 
			else {
				temp=root;
				while(temp!=NULL){
					if (newnode->data <= temp->data){
						if(temp->left==NULL){
							
							temp->left=newnode;	
							break;
						}
						else{
							temp=temp->left;
							
							
						}
						
					
						
					} 
					else{
						if(temp->right==NULL){
							
							temp->right==newnode;
							break;
						}
						else {
							temp=temp->right;
							
							
							
						}
							
					}
				
				}
			}
			}
	
}
