#include<stdio.h>
void swap(int *x, int *y) //reference of a and b 
{
    printf("func: %p %p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 111, b = 222;

    swap(&a, &b);

    printf("main: %p %p\n", &a, &b);

    printf("%d %d\n", a, b);

    return 0;
}