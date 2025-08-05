#include <stdio.h>

int fi(int n){
    
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }    else{
        return fi(n-1)+fi(n-2);
    }
    
}






int main() {
  
 int  k= fi(5);
   printf("value is:%d",k);
   
   return 0;
}
