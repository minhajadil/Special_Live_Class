#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // reverse kore

    for (int i = 0; i < n; i++)
    { // row track

        int l = 0, r = n - 1;

        while (l < r)
        {
            int temp = a[i][l];
            a[i][l] = a[i][r];
            a[i][r] = temp;

            l++;
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}