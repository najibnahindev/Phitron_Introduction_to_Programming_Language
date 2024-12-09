#include <stdio.h>
int arr[10000];
int main()
{
  int n, t, sum = 0, j = 0;
  scanf("%d %d", &n, &t);
  
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for(int i = 0; i < n && sum + arr[i] <= t; i++)
  {
      sum += arr[i];
      j++;
  }
  
  printf("%d", j);
    
  return 0;
}