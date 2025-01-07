#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long x = m / (a * b * c);

        if (m % (a * b * c) == 0) printf("%lld\n", x);
        else printf("-1\n");
    }

    return 0;
}