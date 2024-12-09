#include<stdio.h>

void fun(int x, int n)
{
    if(x > n) return;

    printf("%d\n", x);

    printf("Before function call, Current X = %d\n", x);
    
    fun(x + 1, n);
    
    printf("After function call, Current X = %d\n", x);
}
int main()
{
    printf("Before function call in main\n");

    fun(1, 6);
    
    printf("After function call in main\n");

    return 0;
}