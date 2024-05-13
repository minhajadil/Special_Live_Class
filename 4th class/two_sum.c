#include<stdio.h>


int main(){

    int n ; scanf("%d",&n) ;

    int a[n] ; 

    for(int i =0 ;i<n ;i++){
        scanf("%d",&a[i]) ;
    }

    int target ; scanf("%d",&target) ;

    int flag =0 ;


    for(int i =0 ;i<n ;i++){

        for(int j = i+1 ; j<n ;j++){
           if(a[i]+a[j]==target){
            flag =1 ;
            break ;
           }
        }
}

if(flag==1) printf("Found the pair") ;
else printf("No such pairs") ;



    




}