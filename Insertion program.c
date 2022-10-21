#include <stdio.h>
int main() {
  int arry [6] = {4,5,1,6,2,3};

 int i, steps, size = 6, index, element;
 for (steps = 1; steps < size; steps++ ) {
    element = arry [steps]; 
    index = steps - 1;
while (element < arry[index] && index >= 0) {
   arry[index + 1] = arry[index]; 
   index--;

} 
arry[index + 1] = element;


}


for (i = 0; i < size; i++){ 
  printf("%d",arry[i]);
  }
  }
