#include<stdio.h>
void shiftZero(int arr[], int n)
{   
    int brr[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            brr[count] = arr[i];
            count++;
        }
    }
    for (int i = count; i < n; i++)
    {
        brr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }
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

    shiftZero(arr, n);
    
    return 0;
}