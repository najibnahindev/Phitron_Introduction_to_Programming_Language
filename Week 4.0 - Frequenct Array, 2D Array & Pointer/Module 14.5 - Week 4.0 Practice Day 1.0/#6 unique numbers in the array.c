#include<stdio.h>
int f[10001];
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      f[arr[i]] = 1; 
    }
    
    int sum = 0;
    
    for(int i = 1; i <= 10001; i++)
    {
        if(f[i] > 0)
        {
          sum += 1;  
        } 
    }
    
    printf("%d", sum);
    return 0;
}