#include <stdio.h>

int main()
{

    int row, column;
    scanf("%d %d", &row, &column);

    int matrix[row][column]; // array declaration

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]); // user input
        }
    }

    int flag = 1;

    // unit matrix must be a square matrix

    if (row != column)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {

            if (i == j)
            { // eita primary diagonal er element

                if (matrix[i][j] != 1)
                {
                    // jodi primary diagonal er element 1 na hoi
                    flag = 0;
                }
            }
            else
            { // primary diagonal er element na

                if (matrix[i][j] != 0)
                {
                    // primary diagonal er baire ja ase ta jodi 0 na hoi , tobe ta unit matrix hobe na
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not a Unit Matrix");
    }
}