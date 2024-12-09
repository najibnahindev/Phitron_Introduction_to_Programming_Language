#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("%d %d\n", &arr[0], p);
    printf("%d\n", (p + 1));  //we can find the address of the any element of and array using aerithmatic operation (here we can see the address of 2nd element)

    int a;
    int *x = &a;

    printf("%d %d\n", x, x + 1);

    char b = 'x';
    char *y = &b;

    printf("%d %d\n", y, y + 1);

    return 0;
}