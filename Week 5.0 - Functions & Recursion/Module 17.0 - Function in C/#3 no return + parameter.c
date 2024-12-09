#include<stdio.h>
void add(int a, int b)
{
    printf("Function Called\n");
    int sum = a + b;
    
    printf("%d\n", sum);
}

void alphaCheck(char c)
{
    if('a' <= c && c <= 'z')
    printf("lowercase\n");
    
    else
    printf("UPPERCASE\n");
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    add(a, b);

    alphaCheck('d');

    alphaCheck('G');

    return 0;
}