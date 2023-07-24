#include <stdio.h>


int main () {
    int arr[10];
    int i=0;
    int sumaPares=0;

    arr [0]=12;
    arr [1]=32;
    arr [2]=11;
    arr [3]=25;
    arr [4]=23;
    arr [5]=32;
    arr [6]=15;
    arr [7]=15;
    arr [8]=23;
    arr [9]=34;
    
    size_t n=sizeof(arr)/sizeof(arr[0]);
    printf("%d \n", n);
    
    for(i=0;i<n;i++){

       if(arr[i]%2==0){
           sumaPares=sumaPares+arr[i];
       } 
    }
    printf("%d \n", sumaPares);
    
    
}