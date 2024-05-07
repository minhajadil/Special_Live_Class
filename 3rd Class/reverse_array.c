#include<stdio.h>


int main(){
  
  int size ; scanf("%d",&size) ;
   
   int arr[size] ;

   for(int i =0 ;i<size ;i++)
   {
    scanf("%d",&arr[i]) ;
   }

   int i = 0 , j = size-1 ;

   while(i<j){

    int tmp = arr[i] ;
    arr[i] =arr[j] ;
    arr[j] = tmp ; // swap 

    i++ ;
    j-- ;
   }

   for(int i =0 ;i<size ;i++){
    printf("%d ",arr[i]) ;
   }



    




}