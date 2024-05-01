#include<stdio.h>


int main(){

    char ch ;
    scanf("%c",&ch);

    if(ch=='z'){ // corner case checking
        printf("a\n") ;
    }
    else{
        int x = ch ; // char k ascii te convert korsi
        printf("%c",x+1) ; // ascii value er shathe 1 add kore , char e print korsi
    }



}