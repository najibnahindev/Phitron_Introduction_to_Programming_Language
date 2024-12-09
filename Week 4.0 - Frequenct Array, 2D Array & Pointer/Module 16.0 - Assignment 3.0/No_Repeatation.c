#include<stdio.h>
int freq[100000];
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]] += 1;
    }
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
      if(arr[i] > max)
      {
        max = arr[i];
      }
    }
    int sum = 0;
    for(int i = 1; i <= max; i++)
    {
        if(freq[i] == 1) sum += 1;
    }

    printf("%d", sum);
    return 0;
}