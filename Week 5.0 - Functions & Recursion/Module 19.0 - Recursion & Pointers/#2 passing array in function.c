#include<stdio.h>
int func(int x[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    
    return sum;
}
int main()
{
    int arr[10] = {3, 2, 3, 5, 3, 5, 7, 4, 66, 10};

    int res = func(arr, 10);

    printf("%d", res);

    return 0;
}