#include<stdio.h>
#include<string.h>

void length(char x[])
{
    int n = strlen(x);
    printf("%d", n);    
}
int main()
{
    char str[10] = "Batman";

    length(str);

    return 0;
}