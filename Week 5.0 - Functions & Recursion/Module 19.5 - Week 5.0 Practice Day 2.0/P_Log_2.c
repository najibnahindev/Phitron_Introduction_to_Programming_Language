#include<stdio.h>
long long logResult(long long n)
{
    if(n == 1) return 0;
    return 1 + logResult(n / 2);
}
int main()
{
    long long n;
    scanf("%lld", &n);
    
    long long result = logResult(n);
    printf("%lld", result);

    return 0;
}