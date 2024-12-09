#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int r = 1; r <= n; r++)
    {
        for(int c = 1; c <= n - r; c++)
        {
        printf(" ");
        }
        for(int c = 1; c <= r; c++)
        {
        printf("*");
        }
        for(int c = r-1; c >= 1; c--)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}