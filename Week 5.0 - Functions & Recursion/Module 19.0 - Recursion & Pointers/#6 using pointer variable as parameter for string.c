#include<stdio.h>
void func(char *x)
{
    printf("%s\n", x);
    x[0] = 'f';
}
int main()
{
    char str[10] = "batnam";
    func(str);
    printf("%s", str);

    return 0;
}