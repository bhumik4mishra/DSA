// Online C compiler to run C program online
#include <stdio.h>
void rev(int g){
    int reve=0;
 while(g>0){
    int dig=g%10;
     g=g/10;
     printf("%d ",dig);
     reve=dig+reve*10;
  
     
     
 }
    
     printf("%d",reve);  
    
    
    
}



int main() {
    int n,m;

   rev(246);
    return 0;
}
