#include<stdio.h>
void add(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d", x , y);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    add(x, y);

    return 0;
}