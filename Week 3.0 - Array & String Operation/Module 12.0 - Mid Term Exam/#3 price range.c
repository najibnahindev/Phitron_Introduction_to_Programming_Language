#include <stdio.h>
int arr[10000];
int main()
{
  int n, x, y, j = 0;
  scanf("%d %d %d", &n, &x, &y);
  
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for(int i = 0; i < n; i++)
  {
    if(arr[i] >= x && arr[i] <= y)
    {
      j++;
    }
  }
  
  printf("%d\n", j);
    
  return 0;
}