#include<stdio.h>

// no return , no parameter 


void max_min()
{
    int n ; scanf("%d",&n) ;

    int a[n] ;

    for(int i =0 ;i<n ;i++){
        scanf("%d",&a[i]) ;
    }



    int mn = 1000000;

    for (int i = 0; i < n; i++)
    {
        if (mn > a[i])
            mn = a[i];
    }

    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (mx < a[i])
            mx = a[i];
    }
  

    printf("%d %d\n",mn,mx);
}







int main(){

    max_min() ;

}