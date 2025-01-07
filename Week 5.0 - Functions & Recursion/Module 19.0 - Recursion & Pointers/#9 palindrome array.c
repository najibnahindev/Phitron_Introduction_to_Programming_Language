#include<stdio.h>
void palindromeArray(int arr[],int i, int j)
{
    return(arr[i] == arr[j] && palindromeArray(arr, i + 1, j - 1));

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
    
    palindromeArray(arr, 0, (n - 1));
    
    return 0;
}