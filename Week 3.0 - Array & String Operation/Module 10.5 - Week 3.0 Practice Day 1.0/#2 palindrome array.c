#include<stdio.h>
int arr[100000];
int main()
{
    int n, temp = 1;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        if(arr[i] != arr[j])
        {
          temp = 0;
        }
    }
    if(temp == 1)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }

return 0;
}