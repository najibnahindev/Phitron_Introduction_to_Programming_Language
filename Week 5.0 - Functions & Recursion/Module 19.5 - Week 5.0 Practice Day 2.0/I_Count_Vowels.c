#include<stdio.h>
#include<string.h>
int vowelCheck(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
        {
            return 1;
        }
    else return 0;
}
int vowelCount(char str[], int len)
{
    if(len == 0) return 0;

    return vowelCheck(str[len - 1]) + vowelCount(str, len - 1);
}
int main()
{
    char str[201];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    
    int count  = vowelCount(str, len);
    printf("%d", count);

    return 0;
}