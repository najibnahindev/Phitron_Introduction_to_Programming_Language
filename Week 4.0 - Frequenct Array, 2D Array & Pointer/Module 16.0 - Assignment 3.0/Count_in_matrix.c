#include<stdio.h>
int main()
{
    int n, m, x, a;
    scanf("%d %d %d", &n, &m, &x);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        } 
    }
    for (int k = 0; k < x; k++)
    {
        int count = 0;
        scanf("%d", &a);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {  
                if(arr[i][j] == a) count++;
            } 
        }
        printf("%d\n", count);
    }

    return 0;
}