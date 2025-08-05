
#include <stdio.h>
//int a[5]={3,5,23,6,78};
int bse(int a[],int n,int m){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
      if(a[mid]==m){
          return 1;
      }  
      else if(m<a[mid]){
          high=mid-1;
      }
        else{
           low=mid+1; 
            
        }
        
        
        return 0;
        
        
        
    }
    
    
    
    
    
}


int main() {
  int a[5]={3,5,23,6,78};
  

 int h=bse(a,5,123);
  if(h==1){
      printf("found\n");
  }
  else{
      printf("not")
;  }
   return 0;
}
