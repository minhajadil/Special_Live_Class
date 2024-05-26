#include <stdio.h>

void print_n_to_1(int n)
{

    // base case

    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    print_n_to_1(n - 1);
}

int main()
{

    print_n_to_1(5);
}