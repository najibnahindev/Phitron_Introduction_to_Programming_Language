#include<stdio.h>
int f[10005];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            f[arr[i][j]] = 1;
        }
    }
    
    int x;
    scanf("%d", &x);
    
    if((f[x]) == 1) printf("will not take number");
    else printf("will take number");

    return 0;
}