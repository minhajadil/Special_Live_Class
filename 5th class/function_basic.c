#include <stdio.h>

void print_hello_world(int n)
{

   // base case / kothai thamte hoi

   if (n == 0)
   {
      return;
   }

   printf("%d hello world\n", n);
   print_hello_world(n - 1);
}

int main()
{

   print_hello_world(3);
}