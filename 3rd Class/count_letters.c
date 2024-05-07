#include<stdio.h>


int main(){

    char given_ch ;
    int count[26]={0} ;

    while(scanf("%c",&given_ch)!=EOF){

        count[given_ch-'a']= count[given_ch-'a']+1 ;
    }


    for(int i =0 ;i<26 ;i++){

     if(count[i]>0) printf("%c : %d\n",i+'a',count[i]) ;


    }


}