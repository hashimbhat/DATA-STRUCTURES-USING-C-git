#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ int i = 0, length= 50,steps=0;
int j=0;

  int list[5]={1,3,4,5,2};
  for(i=0; i < 5 ; i++){
    for(j=i+1; j<5;j++) {
      if (list[i] > list[j]) {
        int count= 0;
        count=list[i];
        list[i]=list[j];
        list[j] = count;
        
        
      }
    }
    
  }
 printf(" List sorted: ");
 for(i=0;i<5;i++ ){
   printf("%d",list[i]);
 }
   
}
