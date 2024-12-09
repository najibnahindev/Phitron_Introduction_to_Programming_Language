#include<stdio.h>

void fun(int n)
{
    if(n < 1) return;

    printf("%d\n", n);

    fun(n  - 1);
}
int main()
{
    fun(6);

    return 0;
}