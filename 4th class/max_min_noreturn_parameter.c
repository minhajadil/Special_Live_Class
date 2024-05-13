#include <stdio.h>

// No return + parameter
// karon direct function thekei print kore dibo

void max_min(int a[], int size)
{
    int mn = 1000000;

    for (int i = 0; i < size; i++)
    {
        if (mn > a[i])
            mn = a[i];
    }

    int mx = -1;

    for (int i = 0; i < size; i++)
    {
        if (mx < a[i])
            mx = a[i];
    }
  

    printf("%d %d\n",mn,mx);
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max_min(a,n) ;




}