#include<stdio.h>

void fun(int x, int n)
{
    if(x > n) return;

    fun(x + 1, n);

    printf("%d\n", x);
}
int main()
{
    fun(1, 6);
    
    return 0;
}