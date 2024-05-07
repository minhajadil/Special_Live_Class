#include<stdio.h>


int main(){
   
   int size ; scanf("%d",&size) ;
   
   int arr[size] ;

   for(int i =0 ;i<size ;i++)
   {
    scanf("%d",&arr[i]) ;
   }

   int count[101]={0} ;

   for(int i =0 ;i<size ;i++){
    count[arr[i]] = count[arr[i]]+1 ;
   }

   for(int i =1;i<=100 ;i++){
    printf("%d - %d\n",i,count[i]) ;
   }

   
    




}