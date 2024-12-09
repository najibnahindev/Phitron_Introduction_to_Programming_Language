#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int i;
    
    for(i = 0; i < n; i++)
    {
      if(arr[i] <= min)
      {
        min = arr[i];
      }
    }
    
    printf("%d ", min);
    
    for(i = 0; i < n; i++)
    {
      if(min == arr[i])
      {
        printf("%d", i+1);
        break;
      }
    }
    return 0;
}