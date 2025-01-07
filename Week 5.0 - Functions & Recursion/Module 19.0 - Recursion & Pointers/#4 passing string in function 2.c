#include<stdio.h>
#include<string.h>
#include<ctype.h>

void firstCharUpper(char x[])
{
    x[0] = toupper(x[0]);
    printf("%s", x);    
}
int main()
{
    char str[10] = "batman";

    firstCharUpper(str);

    return 0;
}