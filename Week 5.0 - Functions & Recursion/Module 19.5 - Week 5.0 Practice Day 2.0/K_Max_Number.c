#include<stdio.h>
int arrmax(int arr[], int n)
{
    if(n == 1) return arr[0];
    int max = arrmax(arr, n - 1); 
    return arr[n - 1] > max? arr[n - 1] : max;
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
    
    int max = arrmax(arr, n);
    printf("%d\n", max);

    return 0;
}