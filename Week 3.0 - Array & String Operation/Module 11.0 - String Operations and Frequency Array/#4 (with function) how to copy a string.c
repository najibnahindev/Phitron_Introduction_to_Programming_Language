#include<stdio.h>
#include<string.h>
int main()
{
    char str[15] = "abcd";
    char str1[15] = "efgh";

    printf("%s%s\n", str, str1);

    strcpy(str1, str);  //strcpy(destination, source);

    printf("%s%s\n", str, str1);

return 0;
}