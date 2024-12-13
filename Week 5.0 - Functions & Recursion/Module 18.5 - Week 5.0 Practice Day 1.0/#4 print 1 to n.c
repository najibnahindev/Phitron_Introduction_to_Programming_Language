#include<stdio.h>
int n;
void add(int x, int n)
{
    if( x > n) return;

    printf("%d\n", x);

    add(x + 1, n);
}
int main()
{
    int x = 1, n;
    scanf("%d", &n);
 
    add(x, n);
    return 0;
}