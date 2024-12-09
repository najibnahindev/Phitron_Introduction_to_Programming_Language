#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int r = n; r >= 1; r--)
    {
        for(int c = r; c >= 1; c--)
        {
        printf("%d", c);
        }
        printf("\n");
    }
    return 0;
}