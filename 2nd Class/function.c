#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d", &row);
    int a[row][row];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        scanf("%d", &a[i][j]);
       }
 
    }
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < row; i++)
    { 
        // printf("%d ", a[i][i]);
        primarySum+=a[i][i];
    }

for (int i = 0; i < row; i++)
    {
        secondarySum+=a[i][row -1];
    }

     printf("%d", primarySum);
    return 0;
}