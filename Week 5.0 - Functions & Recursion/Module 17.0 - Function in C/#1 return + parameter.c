#include<stdio.h>
int add(int a, int b)
{
    printf("Function Called\n");
    int sum = a + b;
    
    return sum;
}
int main()
{
    printf("Before\n");
    printf("%d\n", add(5, 7));
    printf("After\n");

    return 0;
}