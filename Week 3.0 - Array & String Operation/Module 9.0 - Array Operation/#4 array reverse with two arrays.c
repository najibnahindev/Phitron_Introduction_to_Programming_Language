#include <stdio.h>

int arr[10000], arr1[10000];

int main()
{
    int length;
    
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++)
    {
      scanf("%d", &arr[i]);
    }
    
    for(int i = 0, j = length - 1; i < length; i++, j--)
    {
      arr1[j] = arr[i];
    }
    
    for(int i = 0; i < length; i++)
    {
      arr[i] = arr1[i];
    }

    for(int i = 0; i < length; i++)
    {
      printf("%d ", arr[i]);
    }
    
    return 0;
}