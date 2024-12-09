#include<stdio.h>
int arr[10000], sum;

void gotoindex(int i, int n)
{
    if(i == n) return;
    sum += arr[i];

    gotoindex(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = 0;
    gotoindex(0, n);

    printf("%d", sum);
    

    return 0;
}