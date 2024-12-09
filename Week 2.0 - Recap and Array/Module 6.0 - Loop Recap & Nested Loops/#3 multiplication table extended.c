#include<stdio.h>
int main()
{
    
    for(int n = 0; n <= 10; n++)
    {
      for(int i = 1; i <= 10; i++)
      {
        printf("%d x %d = %d\n", n, i, n * i);
      }
      printf("\n");
    }

    return 0;
}
