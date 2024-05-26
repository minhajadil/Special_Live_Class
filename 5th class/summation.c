#include <stdio.h>

long long array_sum(int ar[], int n)
{

    if (n == -1)
    {
        return 0;
    }

    long long left_side_sum = array_sum(ar, n - 1);

    return left_side_sum + ar[n];
}

int main()
{

    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("%lld", array_sum(ar, n - 1));
}