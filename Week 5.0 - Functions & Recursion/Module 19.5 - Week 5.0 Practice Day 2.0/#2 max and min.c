#include<stdio.h>
void max_min(int arr[], int n)
{
    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("%d %d\n", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max_min(arr, n);

    return 0;
}