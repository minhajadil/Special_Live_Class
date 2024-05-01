#include<stdio.h>


int main(){


    int test ; scanf("%d",&test) ;


    for(int i =1 ;i<=test ;i++)
    {
          int N ; scanf("%d",&N) ;

          if (N==0){
            printf("0") ;
          }


    while(N!=0){

        printf("%d ",N%10) ;
        N = N/10 ;

    }

    printf("\n");

    }


  





}