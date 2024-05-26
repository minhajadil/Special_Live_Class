#include <stdio.h>

int main()
{

  int ar[3][4];  // array declaration
  ar[1][1] = 20; // value assign

  for (int i = 0; i < 3; i++)
  { // value user input

    for (int j = 0; j < 4; j++)
    {
      scanf("%d", &ar[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  { // value gula print

    for (int j = 0; j < 4; j++)
    {
      printf("%d ", ar[i][j]);
    }

    printf("\n");
  }

  // printf("%d\n",ar[1][2]) ; // 2d array er prottekta index k kivabe access korte hoi
  // printf("%d",ar[2][1]) ;
}