#include<stdio.h>
void add(int x, int y)
{
    printf("%d", x + y); 
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
 
    add(x, y);
 
    return 0;
}