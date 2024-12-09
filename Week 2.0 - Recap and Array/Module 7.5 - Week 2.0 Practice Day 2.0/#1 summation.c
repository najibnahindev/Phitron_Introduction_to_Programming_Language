#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    
    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    if(sum <= 0)
    {
      sum = sum * -1;
    }
    
    printf("%lld", sum);

    return 0;
}