#include <stdio.h>

int arr[10000];

int main()
{
    int length;
    
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    for(int i = 0, j = length - 1; i <= j; i++, j--)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }

    for(int i = 0; i < length; i++)
    {
      printf("%d ", arr[i]);
    }
    
    return 0;
}