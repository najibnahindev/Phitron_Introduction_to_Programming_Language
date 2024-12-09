#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "I am fucking";
    char str1[20] = " Batman";

    strcat(str, str1); //strcat (with who I'll add the string, the string I'll add)

    printf("%s", str);

return 0;
}