#include <stdio.h>

int main()
{

    int n, x;
    scanf("%d %d", &n, &x);

    int mat[n][n]; // square matrix

    for (int i = 0; i < n; i++)
    { // row track

        for (int j = 0; j < n; j++)
        { // column track

            if (i == j || i + j == n - 1)
            { // primary diagonal othoba secondary diagonal
                mat[i][j] = x;
            }
            else
            { // primary diagonal er bairer side
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}