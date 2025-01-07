#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (n != m) 
    {
        printf("NO\n");
        return 0;
    }

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }  
    }
    int c1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i == j) || (j == (n - i - 1)))
            {
                if(arr[i][j] != 1) c1 = 0;
            }
            else
            {
                if(arr[i][j] != 0) c1 = 0;
            }
        }  
    }

    if(c1 == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}