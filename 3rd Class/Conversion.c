#include<stdio.h>
#include<string.h> 


int main(){
    char ar [100000+1] ;
    scanf("%s",ar) ;

    for(int i = 0 ;i< strlen(ar) ;i++){
        if(ar[i]>='A' && ar[i]<='Z'){
            int asci_value = ar[i] ;
            printf("%c",asci_value+32) ;
        }
        else if(ar[i]>='a' && ar[i]<'z'){
            int  asci_value = ar[i] ;
            printf("%c",asci_value-32) ;
        }
        else{
            printf(" ") ;
        }


    }


    




}