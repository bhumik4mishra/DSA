//reversing the original array to a new reversed array
#include <stdio.h>
void rev(int a[],int m){
    int start=0,end=m-1;
    while(start<end){
        int i=0;
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        
        
        start++;
        end--;
    }
    
    
    
}


void pr(int a[],int r){
    for(int i=0;i<r;i++){
        printf("%d  ",a[i]);
    }
    
    
}



void main() {
   int a[5]={4,53,5,1,6};
   printf("og array:\n");
   pr(a,5);
rev(a,5);
 printf("\nUpdated array:\n");
    pr(a,5);
}
