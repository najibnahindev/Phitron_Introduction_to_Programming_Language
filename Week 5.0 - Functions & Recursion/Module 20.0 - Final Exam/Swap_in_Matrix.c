#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
                int temp;
                temp = arr[i][0];
                arr[i][0] = arr[i][m - 1];
                arr[i][m - 1] = temp;
    }

    for (int j = 0; j < m; j++)
    {
            int temp;
            temp= arr[0][j];
            arr[0][j] = arr[n - 1][j];
            arr[n - 1][j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}