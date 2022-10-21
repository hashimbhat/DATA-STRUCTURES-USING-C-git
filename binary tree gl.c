#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct bntr{
	int data;
	struct bntr *left,*right;
}*temp;
struct bntr *insert(struct bntr *root,int val,char lr){
	temp=(struct bntr*)malloc(sizeof(struct bntr));
	temp->data=val;
	temp->left=temp->right=NULL;
	if(lr == "L"){
		root->left=temp;
		
	}
	else if( lr == "R" ){
		root->right=temp;
	}
	
}

 void main(){
 	int r,p;
 	struct bntr *root=(struct bntr*)malloc(sizeof(struct bntr));
 	root->data=8;
 	insert(root,1,'L');
	 insert(root,88,'R');
	 insert(root->left,44,'L');
	 insert(root->right,70,'R');

 	
 	
 
	
	
	
	
	


