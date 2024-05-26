#include <stdio.h>

void print_elements_from_0_to_n_index(int a[], int n)
{

    if (n == -1)
    {
        return;
    }

    print_elements_from_0_to_n_minus1_index(a, n - 1);
    printf("%d ", a[n]);
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
    print_elements_from_0_to_n_minus1_index(a, n - 1);
}