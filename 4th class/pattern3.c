#include <stdio.h>

int main()
{

    int row; // koita line hobe
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n") ;
    }

    return 0 ;
}