#include<stdio.h>
int main()
{
    int n,  count = 0;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i != j) 
            {
                if (arr[i][j] != 0) count++;
            }
            else
            {
                if (arr[i][j] != 1) count++;
            }
        } 
    }

    if(count == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}