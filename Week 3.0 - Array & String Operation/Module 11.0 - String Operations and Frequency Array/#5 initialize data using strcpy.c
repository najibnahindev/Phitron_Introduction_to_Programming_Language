#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];

    printf("%s\n", str);  //will print garbage value or blank

    strcpy(str, "lmfao");

    printf("%s\n", str);

return 0;
}