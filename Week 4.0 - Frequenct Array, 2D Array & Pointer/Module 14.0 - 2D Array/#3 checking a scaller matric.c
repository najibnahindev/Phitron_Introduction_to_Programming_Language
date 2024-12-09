#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
          scanf("%d", &arr[i][j]);
      }
  }
  
  int count = 0, first_element = arr[0][0];
  
  for (int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
          if(i == j)
          {
            if(arr[i][j] != first_element)
            {
              count++;
              break;
            }
          }
          else
          {
            if(arr[i][j] != 0) 
            {
              count++;
              break;
            }
          }
      }
  }
  
  if(count == 0) printf("Scaller");
  else printf("Not Scaller");
  return 0;
}
