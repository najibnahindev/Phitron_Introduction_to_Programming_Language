#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
        for (int i = num - 1; i >= 1; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}