#include<stdio.h>

// RETURN + PARAMETER
int max(int a[] , int size){
    int mx =-1 ;

    for(int i =0 ;i<size ;i++){
        if(mx<a[i]) mx=a[i] ;
    }
    return mx ;
    

}

int min(int a[], int size){
    int mn = 1000000 ;

    for(int i =0 ;i<size ;i++){
        if(mn>a[i]) mn = a[i] ;
    }
    return mn ;

}







int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d ",min(a,n)) ;
    printf("%d\n",max(a,n)) ;

    




}