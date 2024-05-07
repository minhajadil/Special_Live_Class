#include<stdio.h>
#include<string.h>


int main(){

    char a[10] , b[10] ;
    scanf("%s %s",a,b) ;

    if(strcmp(a,b)>0){
        printf("b lexicographically smaller " ) ;
    }
    else if(strcmp(a,b)<0){
        printf("a lexicographically smaller " ) ;
    }
    else printf("Both are equal") ;
    




}