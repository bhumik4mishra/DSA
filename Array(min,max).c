//min and max
#include <stdio.h>
void  min(int a[],int k){
  int min=a[0];
  for(int i=0;i<k;i++){
      if(a[i]<min){
          min=a[i];
      }
      
      
  }
   printf("smallest no :%d",min);
   printf("\n");
    
    
}

void max(int a[],int k){
    int max=a[0];
    for(int i=0;i<k;i++){
        if(a[i]>max){
            max=a[i];
        }
        
    }
    printf("Max val: %d",max);
    
    
    
    
    
}








void main() {
   int a[5]={4,53,5,1,6};
min(a,5);
max(a,5);
 
}
