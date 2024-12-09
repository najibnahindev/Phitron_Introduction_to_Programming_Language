#include<stdio.h>
#include<math.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *x = &n, *y = &m;

    printf("%d", abs(*x - *y));

    return 0;
}