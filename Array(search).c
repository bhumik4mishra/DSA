//search
#include <stdio.h>
void search(int a[],int m,int key){
    for(int i=0;i<m;i++){
    if(key==a[i]){
        printf("found");
    }
    
    }  
    printf("not found");
}








void main() {
   int a[5]={4,53,5,1,6};
search(a,5,65);
 
}
 
