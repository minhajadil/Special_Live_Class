#include<stdio.h>


int main(){


    int N ; scanf("%d",&N) ;
    
    int ans =-1 ;

    for(int i =1 ;i<=N ;i++){
        int x ; 
        scanf("%d",&x) ;

        if(x>ans){ // ami jodi ans er theke boro hpo tobe ami boshbo okahane
            ans =x ;
        }
    }

    printf("%d",ans) ;





}