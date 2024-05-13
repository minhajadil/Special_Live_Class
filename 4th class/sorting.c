#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int pos = 0 ;pos<n ;pos++){


        for(int right_side = pos+1 ;right_side<n ;right_side++){

            if(a[pos]>a[right_side]){
                int tmp = a[pos] ;
                a[pos] = a[right_side] ;
                a[right_side] = tmp ;
            }

        }
    }

      for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}