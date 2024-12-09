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
    
    int max = arr[0], min = arr[0];
    
    for(int i = 0; i < n; i++)
    {
      if(arr[i] > max)
      {
        max = arr[i];
        printf("Maximum Changed: %d\n", max);
      }
      if(arr[i] < min)
      {
        min = arr[i];
        printf("Minimum Changed: %d\n", min);
      }
      printf("Maximum now: %d Minimum Now: %d\n", max, min);
    }
    printf("Maximum: %d\nMinimum: %d\n", max, min);

    return 0;
}