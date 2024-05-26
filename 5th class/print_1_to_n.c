#include <stdio.h>

void print_1_to_n(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    print_1_to_n(n - 1);
    printf("%d ", n); // 5 print hobe -> orthat prothom initial er jonno ami kaj korbo
}

int main()
{

    print_1_to_n(10);
}