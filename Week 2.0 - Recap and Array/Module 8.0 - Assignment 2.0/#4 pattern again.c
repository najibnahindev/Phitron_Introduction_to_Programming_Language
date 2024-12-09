#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int r = 1; r <= n; r++)
    {
      for(int c = 1; c <= r; c++)
      {
        printf("%d", c);
      }
      printf("\n");
    }
    for(int r = n - 1; r >= 1; r--)
    {
      for(int c = 1; c <= n - r; c++)
      {
        printf(" ");
      }
      for(int c = 1; c <= r; c++)
      {
        printf("%d", c);
      }
      printf("\n");
    }

    return 0;
}