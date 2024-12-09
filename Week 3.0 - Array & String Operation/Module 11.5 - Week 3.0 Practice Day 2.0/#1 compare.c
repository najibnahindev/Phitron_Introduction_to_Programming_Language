#include<stdio.h>
#include<string.h>
int main()
{
    char str[21];
    char str1[21];

    scanf("%s", str);
    scanf("%s", str1);

    int compare = strcmp(str, str1);

    if(compare >= 0)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str);
    }

return 0;
}