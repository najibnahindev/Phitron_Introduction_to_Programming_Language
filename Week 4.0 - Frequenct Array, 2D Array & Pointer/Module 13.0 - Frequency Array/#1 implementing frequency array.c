#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[10000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f[i]);
    }

    // printf("%d", f[4]);  //searching

    // we can also search by input variable

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if (f[x] == 1)
            printf("It exists\n");
        else
            printf("It doesn't exist\n");
    }

    return 0;
}