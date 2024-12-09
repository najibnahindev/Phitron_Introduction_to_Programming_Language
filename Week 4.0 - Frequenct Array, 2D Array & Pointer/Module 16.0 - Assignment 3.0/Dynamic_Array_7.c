#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(1 * sizeof(int));

    scanf("%d", &arr[0]);

    int *temp = arr;

    arr = (int *) realloc(arr, n * sizeof(int));

    if(arr == NULL)
    {
        arr = temp;
    } 
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}