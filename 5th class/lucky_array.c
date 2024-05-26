#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int minimum_value = 100001;

    for (int i = 0; i < n; i++)
    {
        if (minimum_value > ar[i])
        {
            minimum_value = ar[i];
        }
    }

    int koibar_ase_ei_minimum = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == minimum_value)
        {
            koibar_ase_ei_minimum++;
        }
    }

    if (koibar_ase_ei_minimum % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
}