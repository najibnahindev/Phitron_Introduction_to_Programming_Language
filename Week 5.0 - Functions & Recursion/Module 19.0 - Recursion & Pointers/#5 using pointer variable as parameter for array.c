#include<stdio.h>
void func(int *x, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(x + i));
    }

}
int main()
{
    int arr[10] = {3, 2, 3, 5, 3, 5, 7, 4, 66, 10};

    func(arr, 10);

    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}