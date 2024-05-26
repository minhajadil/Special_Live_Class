#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m]; // array declaration

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]); // user input
        }
    }

    int X;
    scanf("%d", &X);

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (matrix[i][j] == X)
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
}