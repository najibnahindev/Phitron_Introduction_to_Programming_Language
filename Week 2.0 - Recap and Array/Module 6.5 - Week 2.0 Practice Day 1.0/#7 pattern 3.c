#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int r = 65; r <= 65 + (n - 1); r++)
    {

        for(int c = 65; c <= r; c++)
        {
        printf("%C", r);
        }
        printf("\n");
    }
    return 0;
}