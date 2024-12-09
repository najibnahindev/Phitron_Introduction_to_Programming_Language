#include<stdio.h>
int arr[10000];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

return 0;
}