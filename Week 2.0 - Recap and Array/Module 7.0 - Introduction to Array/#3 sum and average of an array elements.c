#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int j = 0; j < n; j++)
    {
      scanf("%d", &arr[j]);
    }
    
    int sum = 0;
    
    for(int j = 0; j < n; j++)
    {
      sum += arr[j];    
    }
    printf("Sum: %d\nAverage: %.2f", sum, (double)sum / n);
    return 0;
}