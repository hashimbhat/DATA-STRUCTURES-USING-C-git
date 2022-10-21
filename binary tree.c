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


void preod(struct bntr *root){
  
  if(root!=NULL){
    
    printf("%d",root->data);
    preod(root->left);
    preod(root->right);
  }
}
  
  void posd(struct bntr *root){
  
  if(root!=NULL){
    
    
    posd(root->left);
    posd(root->right);
    printf("%d",root->data);
  }
  
}
  void iod(struct bntr *root){
  
  if(root!=NULL){
    
    
    iod(root->left);
    printf("%d",root->data);
    iod(root->right);
    
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
	 printf("enter 1 to print in preorder\n enter 2 to print in postorder \n enter 3 to print in in order\n");
  scanf("%d",&p);
  if(p==1){
    
    preod(root);
    
  
  }
  else if(p==2) {
  posd(root);
  
    
  }
  else if(p==3){
    iod(root);
    
  }
  else 
  {
    printf("invalid choice\n");
  }
  
}
 	
 	
 
	
	
	
	
	


