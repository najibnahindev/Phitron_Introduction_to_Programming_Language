#include<stdio.h>
int main()
{
    int a = 5;
    int *b = &a;

    printf("%d\n", &a);
    printf("%d\n", b);
    printf("%d\n", *b);

    *b = 7;  //changing *b so the value of a will change also

    printf("%d\n", *b);
    printf("%d\n", a);

    return 0;
}