#include<stdio.h>

int sum(int a , int b){

    int summ = a+b ;
    return summ ;


} 

int sum_from_1_to_n(int n){

    int sum =0 ;

    for(int i =1 ;i<=n ;i++){
        sum = sum+i ;
    }

    return sum ;



}





int main(){

    printf("%d\n",sum_from_1_to_n(10)) ;
    printf("%d\n",sum_from_1_to_n(100)) ;
    printf("%d\n",sum_from_1_to_n(200)) ;

}



  
    
  
      


    




