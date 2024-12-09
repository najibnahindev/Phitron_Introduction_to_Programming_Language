#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);

        if(num == 0)
        {
            printf("0");
        }

        while(num > 0)
        {
            printf("%d ", num % 10);
            num /= 10;
        }
        printf("\n");
    }
    return 0;
}