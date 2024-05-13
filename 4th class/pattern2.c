#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space_count = n - 1, star_count = 1;

    for (int i = 1; i <= 2 * n; i++)
    {

        for (int j = 1; j <= space_count; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star_count; j++)
        {
            printf("*");
        }

        if (i <= n-1)
        {
            space_count--;
            star_count = star_count + 2;
        }
        if (i >= n+1)
        {
            space_count++;
            star_count = star_count - 2;
        }

        printf("\n");
    }
}