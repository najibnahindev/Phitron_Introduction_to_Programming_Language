#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "I am fuckin";
    char str1[20] = " Batman";

    int length0 = strlen(str);
    int length1 = strlen(str1);

    int length = length0 + length1;

    for(int i = length0, j = 0; i < length; i++, j++)
    {
        str[i] = str1[j];
    }

    str[length] = '\0';
    printf("%s", str);

return 0;
}