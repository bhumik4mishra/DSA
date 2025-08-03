/* 
Bubble Sort Complexity:
Best Case: O(n) → Already sorted, just one pass.
Worst/Average: O(n^2) → Nested loops, many swaps.
Space: O(1) → No extra space used (in-place).

Note: Arrays are passed by reference in C,
so changes made in functions affect the original array.
*/


#include <stdio.h>

void bub(int a[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            
            }
            
        }
    
        
    }
    
    
}


void main() {
   int a[5]={4,53,5,1,6};
   for(int i=0;i<5;i++){
  printf("%d ",a[i]);
      
  }
 printf("\n");
   
  bub(a,5);
  for(int i=0;i<5;i++){
  printf("%d ",a[i]);
      
  }
 
 
 
}
 
