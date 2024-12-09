#include <stdio.h>
int main()
{
    char str[20];
    scanf("%[^\n]s", str);
    
    printf("%s\n", str);
    
    return 0;
}