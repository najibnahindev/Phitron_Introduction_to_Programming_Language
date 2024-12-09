#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    scanf("%s", str);

    int f[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        f[index] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        count += f[i];
        if (f[i] == 1)
            printf("%c is there\n", i + 'a');
    }

    printf("There are %d unique charecters\n", count);

    return 0;
}