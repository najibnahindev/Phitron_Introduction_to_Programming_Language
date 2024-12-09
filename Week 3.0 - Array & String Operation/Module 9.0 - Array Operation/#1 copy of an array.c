#include <stdio.h>

int arr1[10000], arr2[10000];

int main()
{
    int length1 = 0, length2 = 0;
    
    scanf("%d", &length1);
    
    for(int i = 0; i < length1; i++)
    {
      scanf("%d", &arr1[i]);
    }
    
    printf("Before Copy\n");
    
    for(int i = 0; i < length1; i++)
    {
      printf("%d ", arr1[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < length1; i++)
    {
      printf("%d ", arr2[i]);
    }
    
    for(int i = 0; i < length1; i++)
    {
      arr2[i] = arr1[i];
    }
    
    length2 = length1; //have to change the length of length2 like length1 
    
    arr1[3] = 69; //no impact after copy array
    
    printf("\nAfter Copy\n");
    
    for(int i = 0; i < length1; i++)
    {
      printf("%d ", arr1[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < length2; i++)
    {
      printf("%d ", arr2[i]);
    }
    
    return 0;
}