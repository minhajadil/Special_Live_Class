#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int matrix[n][n]; // array declaration

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]); // user input
        }
    }

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            { // primary
                primary_diagonal_sum += matrix[i][j];
            }
            if (i + j == n - 1)
            { // secondary

                secondary_diagonal_sum += matrix[i][j];
            }
        }
    }

    int difference = primary_diagonal_sum - secondary_diagonal_sum;

    if (difference < 0)
        difference = difference * (-1);

    printf("%d\n", difference);
}