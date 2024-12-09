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
    
    int a;
    scanf("%d", &a);
    
    int findarr = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
      if(arr[i] == a)
      {
        findarr = i;
        printf("%d", findarr);
        count++;
        break;
      }
    }
    if(count == 0)
    {
      printf("-1");
    }
    
    return 0;
}