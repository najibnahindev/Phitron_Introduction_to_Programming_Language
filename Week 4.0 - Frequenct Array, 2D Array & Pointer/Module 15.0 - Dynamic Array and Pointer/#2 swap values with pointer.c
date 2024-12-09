#include<stdio.h>
int main()
{
    int a = 5, b = 6;
    int *x = &a, *y = &b;

    printf("%d %d", a, b);  //before swap

    int temp = *x;
    *x = *y;
    *y = temp;

    printf("%d %d", a, b);  //after swap 

    return 0;
}