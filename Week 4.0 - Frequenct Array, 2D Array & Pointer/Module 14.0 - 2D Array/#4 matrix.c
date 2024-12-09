#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int main_dia = 0, sec_dia = 0;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) main_dia += arr[i][j]; 
            if(i + j == n - 1) sec_dia += arr[i][j];           
        }
    }

    int diff = abs(main_dia - sec_dia);
    printf("%d", diff);

    return 0;
}