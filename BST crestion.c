#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node {
  int data;
  struct node *left,*right;
};
struct node *temp;
void preod(struct node *root){
  
  if(root!=NULL){
    
    printf("%d",root->data);
    preod(root->left);
    preod(root->right);
  }
}
  
  void posd(struct node *root){
  
  if(root!=NULL){
    
    
    posd(root->left);
    posd(root->right);
    printf("%d",root->data);
  }
  
}
  void iod(struct node *root){
  
  if(root!=NULL){
    
    
    iod(root->left);
    printf("%d",root->data);
    iod(root->right);
    
  }
  
}
void main(){
  struct node *root=NULL,*newnode;
  int n,i,p;
  printf("enter no. of nodes you want\n ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("enter data\n");
    scanf("%d", &newnode->data);
    if (root==NULL){
      
      root=newnode;
      }
    else{
      temp=root; 
      while(temp!=NULL){
        if(newnode->data < temp->data){
          if(newnode->left==NULL){
            temp->left=newnode;
            break;
          }
          else{
            temp=temp->left;
          
          }
        }
        
        else {
          if(temp->right==NULL) {
            
            
            temp->right=newnode;
            break;
          }
          else {
            temp=temp->right;
            
          }
          
        }
        
      }
      
    }
    
    
    
  }
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
