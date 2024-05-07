#include<stdio.h>


int main(){

  int size ; scanf("%d",&size) ;
   
   int arr[size] ;

   for(int i =0 ;i<size ;i++)
   {
    scanf("%d",&arr[i]) ;
   }

   int pos_to_delete ; scanf("%d",&pos_to_delete) ;

   for(int i = pos_to_delete ;i<size-1 ;i++){
    arr[i]= arr[i+1] ;
   }
   
   for(int i=0 ;i<size-1 ;i++){
    printf("%d\n",arr[i]) ;
   }

    




}